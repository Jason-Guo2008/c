#include <iostream>
#include <string>
using namespace std;
int main(){
	string s;
	//cin >> s;		它于下面的相反 
	getline(cin,s);		// 把输入里的字符串的空格带进去
	//s = "Mr." + s + ",How are you?"; 
	//s.append(",How are you?");		添加字符串 
	s += ",How are you?";		// 这样也可以 
	s += '?';		// 既可以加字符串，也可以加字符 
	//cout << "Hello " << s << " " << s.size();		打印字符串的长度 
	int m = 0;
	for(int i=0;i<s.size();i++){
		if(s[i] != ' '){
			m++;
		}
	}
	cout << "Hello " << s << " " << m;		// 排除空格的代码 
	return 0;
}
