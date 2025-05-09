//
// Created by Lenovo on 25-5-8.
//

#ifndef ERRORPROCESS_H
#define ERRORPROCESS_H
#include <string>
#include <iostream>
#include <vector>
#include<main.h>
#include "ASTnodes.h"
#include <sstream>
using namespace std;

//����ض��������Ϣ
void addDuplicateDefinitionErrorInformation(string preId, int preLineNumber, string preFlag, string preType,int curLineNumber);//����ظ���������������Ϣ
//���δ���������Ϣ
void addUndefinedErrorInformation(string id, int curLineNumber);
//��ӱ�ʶ�����ʹ�����Ϣ
void addUsageTypeErrorInformation(string curId, int curLineNumber, string curType, string usage, string correctType);
//��Ӹ�����ƥ�������Ϣ
void addNumberErrorInformation(string curId, int curLineNumber, int curNumber, int correctNumber, string usage);
//��ӱ�ʶ�����������Ϣ
void addPreFlagErrorInformation(string curId, int curLineNumber, string curFlag, int preLineNumber, string preFlag);
//��ӱ��ʽ���ʹ�����Ϣ
void addExpressionTypeErrorInformation(_Expression *exp, string curType, string correctType, string description);
//��Ӹ�ֵ�����ֵ����ֵ���Ͳ�ƥ�������Ϣ
void addAssignTypeMismatchErrorInformation(_VariantReference *leftVariantReference, _Expression *rightExpression);
//��������±�Խ�������Ϣ
void addArrayRangeOutOfBoundErrorInformation(_Expression *expression, string arrayId, int X, pair<int,int> range);
//��������½���Ͻ��Ĵ�����Ϣ
void addArrayRangeUpSideDownErrorInformation(string curId, int curLineNumber, int X, int lowBound, int highBound);
//�����������ߵĲ��������Ͳ�һ�µĴ�����Ϣ
void addOperandExpressionsTypeMismatchErrorInformation(_Expression *exp1, _Expression *exp2);
//���ĳ�����������ʹ������Ϣ
void addSingleOperandExpressionTypeMismatchErrorInformation(_Expression *exp, string correctType);
//���read��ʵ�δ�����Ϣ
void addactualParameterOfReadErrorInformation(int curLineNumber, string procedureId, int X, _Expression *exp);
//��ӳ�0������Ϣ
void addDivideZeroErrorInformation(string operation, _Expression *exp);
//���read��ȡboolean���ͱ����������Ϣ
void addReadBooleanErrorInformation(_Expression *exp, int X);
//��������Ϣֱ����ӵ�������Ϣ���б���
void addGeneralErrorInformation(string errorInformation);

#endif //ERRORPROCESS_H
