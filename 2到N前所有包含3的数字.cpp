#include <bits/stdc++.h>
using namespace std;
int main(){
	int n = 0;
	cin >> n;
	for(int i=2;i<n;i++){
		if(i % 10 == 3){
			if(i == n-1){
				cout << i;
			}
			else{
				cout << i << ' ';
			}
			continue;
		}
		if(i / 10 == 3){
			if(i == n-1){
				cout << i;
			}
			else{
				cout << i << ' ';
			}
			continue;
		}
	}
	return 0;
}
