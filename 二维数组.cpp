#include <bits/stdc++.h>
const int MAXN = 85;
using namespace std;
int main(){
	int a[MAXN][8];
	memset(a,0,sizeof(a));
	int n;
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> a[i][0];
		for(int j=1;j<=6;j++){
			cin >> a[i][j];
			a[i][7] += a[i][j];
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<=7;j++){
			cout << a[i][j] << ' ';
		}
		cout << endl;
	}
	return 0;
}
