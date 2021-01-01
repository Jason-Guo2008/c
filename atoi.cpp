#include <bits/stdc++.h>
// ÍòÄÜ°ü 
using namespace std;
// implement atoi function 
inline int readint(){
	char c = getchar();
	while(c > '9' || c < '0'){
		c = getchar();
	}
	int init = Char_Int(c);
	while((c = getchar()) <= '9' && c >= '0'){
		init = (init << 3) + (init << 1) + Char_Int(c);
	}
	return init;
}
int atoi1(string s){
	int sum = 0;
	for(int i=0;i<s.length();i++){
		int d = s.at(i) - '0';
		//sum =  sum + d * pow(10,s.length()-1-i);
		sum = 10*sum + d;
	}
	return sum;
}
int main(){
	string s;
	cout << readint() << endl;
	/***while(cin >> s){
		//cout << atoi1(s) << endl;
		
	}***/
	return 0;
}
