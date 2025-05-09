//
// Created by Lenovo on 25-5-8.
//
#include"semanticErrorProcess.h"
vector<string> semanticErrorInformation;//存储错误信息的列表
vector<string> semanticWarningInformation;//存储警告信息的列表
extern void inputVariantRef(_VariantReference *variantRefNode, string &variantRef, int mode=0, bool isReferedActualPara=false);//获取变量引用
extern int inputExpression(_Expression *expressionNode, string &expression, int mode=0, bool isReferedActualPara=false);
void addDuplicateDefinitionErrorInformation(string preId, int preLineNumber, string preFlag, string preType, int curLineNumber){
	string errorInformation = "[Duplicate defined error!] <Line " + to_string(curLineNumber) + "> ";
	if (preLineNumber != -1)
		errorInformation += "\"" + preId + "\"" + " has already been defined as a " + preFlag + " at line " + to_string(preLineNumber) + ".";
	else
		errorInformation += "\"" + preId + "\"" + " has already been defined as a lib program.";
	semanticErrorInformation.push_back(errorInformation);
	CHECK_ERROR_BOUND
}

void addUndefinedErrorInformation(string id, int curLineNumber) {
	string errorInformation;
	errorInformation = "[Undefined identifier!] <Line " + to_string(curLineNumber) + "> ";
	errorInformation += id + " has not been defined.";
	semanticErrorInformation.push_back(errorInformation);
	CHECK_ERROR_BOUND
}

void addUsageTypeErrorInformation(string curId, int curLineNumber, string curType, string usage, string correctType) {
	string errorInformation;
	errorInformation = "[Usage type error!] <Line " + to_string(curLineNumber) + "> ";
	errorInformation += "\"" + curId + "\"" + " used for " + usage + " should be " + correctType + " but not " + curType + ".";
	semanticErrorInformation.push_back(errorInformation);
	CHECK_ERROR_BOUND
}

//数组下标个数不匹配、函数或过程的实参和形参的个数不匹配
void addNumberErrorInformation(string curId, int curLineNumber, int curNumber, int correctNumber, string usage) {
	string errorInformation;
	if (usage == "array") {
		errorInformation += "[Array index number mismatch!] ";
		errorInformation += "<Line " + to_string(curLineNumber) + "> ";
		errorInformation += "Array \"" + curId + "\"" + " should have " + to_string(correctNumber) + " but not " + to_string(curNumber) + " indices.";
	}
	else if (usage == "procedure") {
		errorInformation += "[Procedure parameter number mismatch!] ";
		errorInformation += "<Line " + to_string(curLineNumber) + "> ";
		errorInformation += "Procedure \"" + curId + "\"" + " should have " + to_string(correctNumber) + " but not " + to_string(curNumber) + " parameters.";
	}
	else if (usage == "function") {
		errorInformation += "[Function parameter number mismatch!] ";
		errorInformation += "<Line " + to_string(curLineNumber) + "> ";
		errorInformation += "Function \"" + curId + "\"" + " should have " + to_string(correctNumber) + " but not " + to_string(curNumber) + " parameters.";
	}
	else {
		cout << "[addNumberErrorInformation] usage error" << endl;
		return;
	}
	semanticErrorInformation.push_back(errorInformation);
	CHECK_ERROR_BOUND
}

void addPreFlagErrorInformation(string curId, int curLineNumber, string curFlag, int preLineNumber, string preFlag) {
	string errorInformation;
	errorInformation += "[Symbol kinds mismatch!] ";
	errorInformation += "<Line " + to_string(curLineNumber) + "> ";
	errorInformation += "\"" + curId + "\"" + " defined at line " + to_string(preLineNumber) + " is a " + preFlag + " but not a " + curFlag + ".";
	semanticErrorInformation.push_back(errorInformation);
	CHECK_ERROR_BOUND
}

void addExpressionTypeErrorInformation(_Expression *exp, string curType, string correctType, string description) {
	string errorInformation;
	errorInformation += "[Expression type error!] ";
	errorInformation += "<Line " + to_string(exp->lineNumber) + "> ";
	string expression;
	inputExpression(exp, expression, 1);
	errorInformation += "Expression \"" + expression + "\" used for " + description + " should be " + correctType + " but not " + curType + ".";
	semanticErrorInformation.push_back(errorInformation);
	CHECK_ERROR_BOUND
}

void addAssignTypeMismatchErrorInformation(_VariantReference *leftVariantReference, _Expression *rightExpression) {
	string errorInformation;
	errorInformation += "[Assign statement type mismatch!] ";
	errorInformation += "<Left at line " + to_string(leftVariantReference->variantId.second) + ", right at line " + to_string(rightExpression->lineNumber) + "> ";
	string varRef, exp;
	inputVariantRef(leftVariantReference, varRef, 1);
	inputExpression(rightExpression, exp, 1);
	errorInformation += "Left \"" + varRef + "\" type is " + leftVariantReference->variantType + " while right \"" + exp + "\" type is " + rightExpression->expressionType + ".";
	semanticErrorInformation.push_back(errorInformation);
	CHECK_ERROR_BOUND
}

void addArrayRangeOutOfBoundErrorInformation(_Expression *expression, string arrayId, int X, pair<int,int> range){
	string errorInformation;
	errorInformation += "[Array range out of bound!] ";
	errorInformation += "<Line " + to_string(expression->lineNumber) + "> ";
	string exp;
	inputExpression(expression, exp, 1);
	errorInformation += "The value of expression \"" + exp + "\"" + " is " + to_string(expression->totalIntValue);
	errorInformation += ", but the range of array \"" + arrayId + "\" " + to_string(X) + "th index is " + to_string(range.first) + " to " + to_string(range.second) + ".";
	semanticErrorInformation.push_back(errorInformation);
	CHECK_ERROR_BOUND
}


void addArrayRangeUpSideDownErrorInformation(string curId, int curLineNumber, int X, int lowBound, int highBound) {
	string errorInformation;
	errorInformation += "[Array range upsidedown error!] ";
	errorInformation += "<Line " + to_string(curLineNumber) + "> ";
	errorInformation += to_string(X) + "th range of array \"" + curId + "\" have larger low bound and smaller high bound, which is " + to_string(lowBound) + " and " + to_string(highBound) + ".";
	semanticErrorInformation.push_back(errorInformation);
	CHECK_ERROR_BOUND
}

void addOperandExpressionsTypeMismatchErrorInformation(_Expression *exp1, _Expression *exp2){
	string errorInformation;
	errorInformation += "[Operands expression type mismatch!] ";
	errorInformation += "<Left at line " + to_string(exp1->lineNumber) + ", right at line " + to_string(exp2->lineNumber) + "> ";
	string expStr1, expStr2;
	inputExpression(exp1, expStr1, 1);
	inputExpression(exp2, expStr2, 1);
	errorInformation += "Left \"" + expStr1 + "\" type is " + exp1->expressionType + " while right " + "\"" + expStr2 + "\" type is " + exp2->expressionType + ".";
	semanticErrorInformation.push_back(errorInformation);
	CHECK_ERROR_BOUND
}

void addSingleOperandExpressionTypeMismatchErrorInformation(_Expression *exp, string correctType){
	string errorInformation;
	errorInformation += "[Operand expression type error!] ";
	errorInformation += "<Line " + to_string(exp->lineNumber) + "> ";
	string expStr;
	inputExpression(exp, expStr, 1);
	errorInformation += "Expression \"" + expStr + "\" type should be " + correctType + " but not " + exp->expressionType + ".";
	semanticErrorInformation.push_back(errorInformation);
	CHECK_ERROR_BOUND
}

void addactualParameterOfReadErrorInformation(int curLineNumber, string procedureId, int X, _Expression *exp) {
	string errorInformation;
	errorInformation += "[Actual parameter of read procedure type error!] ";
	errorInformation += "<Line " + to_string(curLineNumber) + "> ";
	string expression;
	inputExpression(exp, expression, 1);
	errorInformation += "\"" + procedureId + "\" " + to_string(X) + "th expression parameter \"" + expression + "\" is not a variant or an array element.";
	semanticErrorInformation.push_back(errorInformation);
	CHECK_ERROR_BOUND
}

void addDivideZeroErrorInformation(string operation, _Expression *exp) {
	string errorInformation;
	errorInformation += "[Divide zero error!] ";
	errorInformation += "<Line " + to_string(exp->lineNumber) + "> ";
	string expression;
	inputExpression(exp, expression, 1);
	errorInformation += "The value of expression \"" + expression + "\" is 0, which is the second operand of operation \"" + operation + "\".";
	semanticErrorInformation.push_back(errorInformation);
	CHECK_ERROR_BOUND
}

void addReadBooleanErrorInformation(_Expression *exp, int X) {
	string errorInformation;
	string expression;
	inputExpression(exp, expression, 1);
	errorInformation = "[Read boolean error!] ";
	errorInformation += "<Line " + to_string(exp->lineNumber) + "> ";
	errorInformation += "The " + to_string(X) + "th actual parameter of read \"" + expression + "\" is boolean, it can't be read.";
	semanticErrorInformation.push_back(errorInformation);
	CHECK_ERROR_BOUND
}

void addGeneralErrorInformation(string errorInformation) {
	semanticErrorInformation.push_back(errorInformation);
	CHECK_ERROR_BOUND
}