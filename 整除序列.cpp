#include <bits/stdc++.h>
using namespace std;
int main(){
	long long n = 0;
	cin >> n;
	while(n != 0){
		if(n != 1){
			cout << n << ' ';
		}
		else{
			cout << n;
		}
		n = n / 2;
	}
	return 0;
}
