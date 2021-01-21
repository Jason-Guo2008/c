#include <bits/stdc++.h>
using namespace std;
int main(){
	string a;
	cin >> a;
	bool y = true;
	int num = 0;
	if(a.size() <= 2){
		cout << "No";
		return 0;
	}
	for(int i=0;i<a.size();i++){
		for(int j=a.size()-1 - i;j>a.size()-(i+2) ;j--){
			if(a[i] != a[j]){
				cout << "No";
				y = false;
				break;
			}
			num++;
		}
		if(y == false){
			break;
		}
	}
	if(y){
		char p = a[0];
		char o = a[1];
		if(p == o){
			cout << "No";
		}
		else{
			cout << "Yes";
		}
	}
	return 0;
}
