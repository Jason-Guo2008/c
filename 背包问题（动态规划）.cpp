#include <bits/stdc++.h>
using namespace std;


int p[4]={0,1500,3000,2000};
int w[4]={0,1,4,3};

int dp[10][10]={0};

int main(){

	
	for(int i=1;i<4;i++){
		for(int j=1;j<5;j++){
			if(j>=w[i]){
				dp[i][j]=max(dp[i-1][j],dp[i-1][j-w[i]]+p[i]);
			}
			else{
				dp[i][j]=dp[i-1][j];//����һ��j�����ı��������װ�����Ǹ������������ⱳ��������ֵ�͵���û���Ǹ�������ʱ�� 
			}
			cout<<dp[i][j]<<" ";
		}
		cout<<endl;
	}
	
	return 0;
}
