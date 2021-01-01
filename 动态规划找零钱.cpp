#include <bits/stdc++.h>
using namespace std;
int main(){
	int dp[12] = {0},Change = 11,coin[3] = {5,2,1};
	for(int i=1;i<=Change;i++){
		dp[i] = 100000;
	}
	for(int i=1;i<=Change;i++){
		for(int j=0;j<3;j++){
			if(i >= coin[j] && dp[i-coin[j]]+1 < dp[i]){
				dp[i] = dp[i-coin[j]]+1;
			}
		}
	}
	for(int i=1;i<=Change;i++){
		cout << i << ':' << dp[i] << endl;
	}
	cout << dp[4];
	return 0;
}
