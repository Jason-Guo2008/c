#include <bits/stdc++.h>
using namespace std;
int gcd(int m,int n = 0){
	if(n == n){
		return m;
	}
	else{
		if(m > n){
			return gcd(m-n,n);
		}
		else{
			return gcd(n,n-m);
		}
	}
}
int main(){
	int num,num2;
	cin >> num >> num2;
	cout << gcd(num,num2);
	return 0;
}
