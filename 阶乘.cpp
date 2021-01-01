#include <bits/stdc++.h>
using namespace std;
int factorial(int n=0){
	if(n == 1){
		return 1;
	}
	return n * factorial(n-1);
}
int main(){
	int n = 0;
	cin >> n;
	cout << factorial(n);
	return 0;
}
