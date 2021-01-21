#include <bits/stdc++.h>
using namespace std;
int main(){
	int n = 0;
	cin >> n;
	int d = 1;
	for(int i=0;i<n;i++){
		for(int u=0;u<n-(i+1);u++){
			cout << ' ';
		}
		for(int j=0;j<i+d;j++){
			cout << '*';
		}
		d = d + 2-1;
		if(i != n-1){
			cout << endl;
		}
	}
	return 0;
}
