#include <bits/stdc++.h>
using namespace std;
const int N = 50;
int n,m,a[N][N];
int x,y;
int main(){
	cin >> n;
	a[1][n/2+1] = 1;
	x = 1;
	y = n/2+1;
	m = n*n;
	int nx,ny;
	for(int i=2;i<=m;i++){
		if(x == 1 && y != n){
			nx = n;
			ny = y + 1;
		}
		else if(y == n && x != 1){
			ny = 1;
			nx = x - 1;
		}
		else if(x == 1 && y == n){
			nx = x + 1;
			ny = y;
		}
		else if(x != 1 && y != n){
			if(!a[x-1][y+1]){
				nx = x - 1;
				ny = y + 1;
			}
			else{
				nx = x + 1;
				ny = y;
			}
		}
		a[nx][ny] = i;
		x = nx;
		y = ny;
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cout << a[i][j] << ' ';
		}
		cout << endl;
	}
	return 0;
} 
