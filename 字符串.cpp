#include <iostream>
#include <string>
using namespace std;
int main(){
	string s;
	//cin >> s;		����������෴ 
	getline(cin,s);		// ����������ַ����Ŀո����ȥ
	//s = "Mr." + s + ",How are you?"; 
	//s.append(",How are you?");		����ַ��� 
	s += ",How are you?";		// ����Ҳ���� 
	s += '?';		// �ȿ��Լ��ַ�����Ҳ���Լ��ַ� 
	//cout << "Hello " << s << " " << s.size();		��ӡ�ַ����ĳ��� 
	int m = 0;
	for(int i=0;i<s.size();i++){
		if(s[i] != ' '){
			m++;
		}
	}
	cout << "Hello " << s << " " << m;		// �ų��ո�Ĵ��� 
	return 0;
}
