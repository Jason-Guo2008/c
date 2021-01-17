#include <bits/stdc++.h>
using namespace std;
int main(){
	int n = 0;
	int a[n+10];
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n-i-1;j++){
			int num = a[j];
			a[j] = a[j+1];
			a[j+1] = num;
		}
	}
	for(int i=0;i<n;i++){
		if(i != n-1){
			cout << a[i] << ' ';
		}
		else{
			cout << a[i];
		}
	}
	return 0;
} 
