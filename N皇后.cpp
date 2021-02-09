#include <bits/stdc++.h>
using namespace std;
const int N = 10;
bool C[N+1],D[2*N],E[2*N+1];
int n,ans = 0; 
void search(int x){
	if(x == n+1){
		ans++;
		return;
	}
	for(int j=1;j<=n;j++){
		if(!C[j] && !D[x-j+n] && !E[x+j]){
			C[j] = D[x-j+n] = E[x+j] = true;
			search(x+1);
			C[j] = D[x-j+n] = E[x+j] = false;
		}
	}
}
int main(){
	cin >> n;
	ans = 0;
	search(1);	// 从第一行开始
	cout << ans << endl; 
	return 0;
}
