#include <bits/stdc++.h>
using namespace std;
int main(){
	int s1[9] = {0,4,8,3,7,2,5,6,1};
	int s2[9] = {0,4,8,3,7,2,5,6,1};
	copy(s1,s1+9,s2);
	sort(s1,s1+9);
	int l1 = 9;
	int l2 = 9;
	int dp[10][10];
	memset(dp,0,10*10*sizeof(int));
	for(int i=1;i<=9;i++){
		for(int j=1;j<=9;j++){
			if(s1[i] == s2[j]){
				dp[i][j] = dp[i-1][j-1] + 1;
			}
			else{
				dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
			}
		}
	}
	cout << dp[9][9];
	return 0;
} 
