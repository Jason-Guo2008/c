#include <bits/stdc++.h>
using namespace std;
int main(){
	char c = 'd';
	/***if(!isalpha(c) && !isdigit(c)){		// �ж��Ƿ�����ĸ������ 
		cout << "Not a letter or digit" << endl;
	}
	**/
	c = toupper(c);		// ��Ϊ��д 
	c = tolower(c);		// ��ΪСд 
	cout << c << endl;
	string s("Good Morning");
	for(int i=0;i<s.length();i++){		// ȫ����Ϊ��д 
		s.at(i) = toupper(s.at(i));
	}
	cout << s;
	return 0;
}
