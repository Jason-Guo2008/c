#include <bits/stdc++.h>
using namespace std;
int a[100];
int fibo(int n,int *a){
	if(n == 1){
		return 1;
	}
	if(n == 2){
		return 2;
	}
	if(a[n]!=0){
		return a[n];
	} 
	else{
		return fibo(n-1,a) + fibo(n-2,a);
	}
}
int main(){
	memset(a,sizeof(a),0);
	int x = 0;
	cin >> x;
	cout << fibo(x,a);
	return 0;
}
