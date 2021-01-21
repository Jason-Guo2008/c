#include <bits/stdc++.h>
using namespace std;
int main(){
	int a,n,sum = 0;
	cin >> a >> n;
	for(int i=0;i<n;i++){
		sum += a;
		a = a * 10 + a % 10;
		cout << a << endl;
	}
	cout << sum;
	return 0;
}
