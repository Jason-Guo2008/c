#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;
// 判断一个大学是否成立于1900年前 
bool isAllDights(string s){
	for(int i=0;i<s.size();++i){
		if(s[i] < '0' || s[i] > '9'){
			return false;
		}
		return true;
	}
}
int main(){
	string s;
	while(cin >> s){
		if(isAllDights(s)){// 循环输入
			int year = atoi(s.c_str());
			if(year < 1900){
				cout << "Yes" << endl;
			}
			else{
				cout << "NO" << endl;
			}
		}
	} 
	// "Peking University is set up at 1898."
	return 0;
}
