#include <iostream>
#include <string>
using namespace std;
int main(){
	string s;
	getline(cin,s);
	// "Peking University is set up at 1898."
	if(s.find("Peking") != string::npos){	// 在里头找某个想要的字符串 
		cout << "Yes" << endl;
	}
	else{
		cout << "No" << endl;
	}
	return 0;
}
