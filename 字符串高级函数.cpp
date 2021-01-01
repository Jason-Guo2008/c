#include <bits/stdc++.h>
using namespace std;
int main(){
	string s("Good Morning!");
	//string s2("Good Morning!");
	// (某一个字符串变量).replace(a,b,"（想要调换的字符串）")  前面两个参数是调换的范围 
	string s2 = s.substr(2,4);	// 忽略某个或一些字符串 
	// (某一个字符串变量).erase(a,b) 把a到b开始删除 
	// (某一个字符串变量)insert(a,"ood")  从a开始插入字符串 
	// 第一个空是忽略前一个几个字符串，第二个空是忽略从字符串最后开始开始数忽略几个字符串 
	cout << s2 << endl;
	if(s.find_first_of("oo") != string::npos){
		cout << "Found!";	// 查找第一个想要的字符串在某个字符串的位置 
	} 
	// (字符串变量).find_last_of找到某一个字符串在某一个字符串里最后出现在的位置 
	if(s == s2){
		cout << "Yes";
	}
	else{
		cout << "No";
	}
}
