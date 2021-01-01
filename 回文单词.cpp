#include <bits/stdc++.h>
#define MAX 21
using namespace std;
int main(){
	string s;
	cin >> s;
	int f = 0;
	int e = s.length()-1;
	bool a = true;
	while(f < e){
		if(s[f] != s[e]){
			cout << "NO";
			a = false;
			break;
		}
		f++;
		e--;
	}
	if(a){
		cout << "YES";
	}
}
