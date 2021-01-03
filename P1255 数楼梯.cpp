#include <bits/stdc++.h>
using namespace std;
int fact(int n = 0){
	if(n == 0 || n == 1){
		return 1;
	}
	return fact(n-1) + fact(n-2);
}
int main(){
	int n = 0;
	cin >> n;
	cout << fact(n);
	return 0;
}
