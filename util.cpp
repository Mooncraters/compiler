#include "util.h"

int str2int(string str){
    int res=0;
    int len=int(str.length());
    for(int i=0;i<len;i++){
        res=res*10;
        res+=str[i]-'0';
    }
    return res;
}
float str2float(string str){
    float res=0;
    int len=int(str.length());
    int loc=int(str.find('.'));
    for(int i=0;i<loc;i++){
        res*=10;
        res+=str[i]-'0';
    }
    float base=1;
    for(int i=loc+1;i<len;i++){
        base=base*0.1;
        res+=base*(str[i]-'0');
    }
    return res;
}
bool chs2int(char* chs, int &num) {
	int tmp = num;
	num = 0;
	for (; *chs != '\0'; chs++) {
		if (*chs >= '0'&&*chs <= '9') {
			num *= 10;
			num += *chs - '0';
		}
		else {
			num = tmp;
			return false;
		}
	}
	return true;
}

string char2str(char* chs) {
	string res;
	for (; *chs != 0; chs++)
		res += *chs;
	return res;
}