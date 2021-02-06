#include <bits/stdc++.h>
using namespace std;
int b[10000000];
int main(){
	string a;
	cin >> a;
	if(a[0] + a[1] == a[a.size()-1] + a[a.size()-2]){
		cout << "YES";
	}
	else{
		cout << "NO";
	}
	return 0;
}
