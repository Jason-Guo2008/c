#include <bits/stdc++.h>
using namespace std;
int main(){
	string s("Good Morning!");
	//string s2("Good Morning!");
	// (ĳһ���ַ�������).replace(a,b,"����Ҫ�������ַ�����")  ǰ�����������ǵ����ķ�Χ 
	string s2 = s.substr(2,4);	// ����ĳ����һЩ�ַ��� 
	// (ĳһ���ַ�������).erase(a,b) ��a��b��ʼɾ�� 
	// (ĳһ���ַ�������)insert(a,"ood")  ��a��ʼ�����ַ��� 
	// ��һ�����Ǻ���ǰһ�������ַ������ڶ������Ǻ��Դ��ַ������ʼ��ʼ�����Լ����ַ��� 
	cout << s2 << endl;
	if(s.find_first_of("oo") != string::npos){
		cout << "Found!";	// ���ҵ�һ����Ҫ���ַ�����ĳ���ַ�����λ�� 
	} 
	// (�ַ�������).find_last_of�ҵ�ĳһ���ַ�����ĳһ���ַ������������ڵ�λ�� 
	if(s == s2){
		cout << "Yes";
	}
	else{
		cout << "No";
	}
}
