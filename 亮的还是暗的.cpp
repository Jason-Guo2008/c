#include <bits/stdc++.h>
using namespace std;
int main(){
	int n = 0 ;
	cin >> n;
	bool y = false;
	int r = 0;
	while(r != n){
		if(y){
			y = false;
		}
		else{
			y = true;
		}
		r++;
	}
	if(y){
		cout << 1;
	}
	else{
		cout << 0;
	}
	return 0;
}
