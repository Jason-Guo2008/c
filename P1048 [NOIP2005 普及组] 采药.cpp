#include <bits/stdc++.h>
using namespace std;
int dp[2000][2000];
int main(){
	int time[2000] = {0};	// ʱ�� 
	int value[2000] = {0};	// ��ֵ 
	memset(dp,0,sizeof(dp));
	int t,m = 0;	// ����ҩʱ��Ͳ�ҩ���� 
	cin >> t >> m;
	for(int i=1;i<=m;i++){
		cin >> time[i] >> value[i];
	} 
	for(int i=1;i<=m;i++){
		for(int j=1;j<=t;j++){
			if(time[i] > j){
				dp[i][j] = dp[i-1][j];
			}
			else{
				dp[i][j] = max(dp[i-1][j],dp[i-1][j-time[i]] + value[i]);
			}
		}
	}
	cout << dp[m][t];
	return 0;
}
