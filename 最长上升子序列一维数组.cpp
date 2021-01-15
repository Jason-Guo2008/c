#include <bits/stdc++.h>
using namespace std;
int a[8] = {14,46,31,42,31,2,3,5};
int main(){
	int dp[10] = {0};
	dp[0] = 1;
	int ans = 0;
	for(int i=1;i<8;i++){
		int max = 0;
		for(int j=0;j<i;j++){
			if(a[i] > a[j] && dp[j] > max){
				max = dp[j];
			}
		}
		dp[i] = max + 1;
		if(dp[i] > ans){
			ans = dp[i];
		}
	}
	cout << ans;
	return 0;
}
