#include <bits/stdc++.h>
using namespace std;
int a[35][35] = {0};
int main(){
	int n = 0;
	cin >> n;
	int num = 0;
	for(int i=1;i<=n;i++){
		a[i][1] = 1;
		for(int j=1;j<=i;j++){
			if(i >= 2){
				num = a[i-1][j-1] + a[i-1][j];
				a[i][j] = num;
			}
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			if(j != i){
				cout << a[i][j] << ' ';
			}
			else{
				cout << a[i][j];
			}
		}
		if(i != n){
			cout << endl;
		}
	}
	return 0;
}
