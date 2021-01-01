#include <bits/stdc++.h>
using namespace std;
int horse_can_eat(int *map,int n,int m){
	map[n][m]=1;
    map[n-1][m-2]=1;
    map[n-2][m-1]=1;
    map[n-2][m+1]=1;
    map[n-1][m+2]=1;
    map[n+1][m-2]=1;
    map[n+2][m-1]=1;
    map[n+2][m+1]=1;
    map[n+1][m+2]=1;
    return 0;
}
int main(){
	int ans = 0;
	int n,m = 0;
	int o,p = 0;
	int a[n+2][m+2];
	int map[n+2][m+2]; 
	memset(a,0,sizeof(map));
	cin >> n >> m >> o >> p;
	horse_can_eat(*map,n,m); 
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			if(i == 1 || j == 1){
				a[i][j] = 1;
			}
			else if(map[i][j] == 1){
				a[i][j] = 0;
			}
			else{
				ans = a[i][j-1] + a[i-1][j];
				a[i][j] = ans;
				}
			}
		}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cout << a[i][j] << ' ';
		}
		cout << endl;
	}
	return 0;
}
