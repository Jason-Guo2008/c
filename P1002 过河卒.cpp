#include <bits/stdc++.h>
using namespace std;

const int M=30,N=30;
unsigned long long a[M][N];

int main(){
	int i,j,m,n,hx,hy;
	int dx[8]={2,1,-1,-2,-2,-1,1,2};
	int dy[8]={1,2,2,1,-1,-2,-2,-1};
	bool judge[M][N];
	memset(a,0,sizeof(a));
	memset(judge,0,sizeof(judge));
	cin>>m>>n>>hx>>hy;
	judge[hx][hy]=1;
	for(i=0;i<8;i++){
		if(hx+dx[i]>=0 && hx+dx[i]<=m && hy+dy[i]>=0 && hy+dy[i]<=n){
			judge[hx+dx[i]][hy+dy[i]]=1;
		}
	}
	int k=0;
	while(!judge[k][0]&&k<=m){
		a[k++][0]=1;
	}
	int l=0;
	while(!judge[0][l]&&l<=n){
		a[0][l++]=1;
	}
	
	for(i=1;i<=m;i++){
		for(j=1;j<=n;j++){
			if(judge[i][j]){
				a[i][j]=0;
				continue;
			}
			else{
				a[i][j]=a[i-1][j]+a[i][j-1];
			} 
			
		}
	}
	cout<<a[m][n];	
	return 0;
}

	

