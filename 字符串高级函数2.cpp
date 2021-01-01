#include <bits/stdc++.h>
using namespace std;
int main(){
	char c = 'd';
	/***if(!isalpha(c) && !isdigit(c)){		// 判断是否是字母或数字 
		cout << "Not a letter or digit" << endl;
	}
	**/
	c = toupper(c);		// 改为大写 
	c = tolower(c);		// 改为小写 
	cout << c << endl;
	string s("Good Morning");
	for(int i=0;i<s.length();i++){		// 全部改为大写 
		s.at(i) = toupper(s.at(i));
	}
	cout << s;
	return 0;
}
