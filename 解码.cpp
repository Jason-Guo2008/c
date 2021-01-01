#include <bits/stdc++.h>
using namespace std;
int main(){
	string a;
	cin >> a;
	char p;
	for(int i=0;i<a.size();i++){
		if((int)a[i] >= 48 && (int)a[i] <= 57){
			p = a[i-1];
			for(int j=0;j<(int)a[i]-48-1;j++){
				cout << p;
			}
		}
		else{
			cout << a[i];
		}
	}
	return 0;
}
