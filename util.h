#ifndef UTIL_H
#define UTIL_H
#include <sstream>
#include <string>
using namespace std;
int str2int(string str);
float str2float(string str);
bool chs2int(char* chs, int &num);
string char2str(char* chs);
string itos(int num);
# endif // UTIL_H