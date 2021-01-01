#include <bits/stdc++.h>
using namespace std;
int a[9][9];
int main(){
	int ans = 0;
	for(int i=1;i<=4;i++){
		for(int j=1;j<=5;j++){
			if(i == 1 || j == 1){
				a[i][j] = 1;
			}
			else if(i % 2 == 0 && j % 2 == 0){
				a[i][j] = 0;
			}
			else{
				ans = a[i][j-1] + a[i-1][j];
				a[i][j] = ans;
				}
			}
		}
	for(int i=1;i<=4;i++){
		for(int j=1;j<=5;j++){
			cout << a[i][j] << ' ';
		}
		cout << endl;
	}
	return 0;
}
