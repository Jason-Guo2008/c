#include <bits/stdc++.h>
#define l long long
#define N 1000001
using namespace std;
l r,n,i,j,a[1005][1005],k,t,s;
int main() {
	cin>>n;
	for(i=1; i<=n; i++){
		for(j=1; j<=i; j++){
			cin>>a[i][j];
		}	
	}	
	for(i=n-1; i>=1; i--){
		for(j=1; j<=i; j++){
			a[i][j]+=max(a[i+1][j],a[i+1][j+1]);
		}	
	}
	cout<<a[1][1];
	return 0;
}
