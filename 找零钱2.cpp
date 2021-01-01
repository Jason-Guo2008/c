#include <bits/stdc++.h>
#define MAXN 10100
using namespace std;
int a[MAXN];
int moneyChange(int change){
	if(change == 0){
		return 0;
	}
	if(change < 0){
		return -1;
	}
	if(a[change] != 0){
		return a[change];
	}
	int res = 10000000;
	if(change >= 5){
		return res = min(res,moneyChange(change-5)+1);
	}
	if(change >= 2){
		return res = min(res,moneyChange(change-2)+1);
	}
	if(change >= 1){
		return res = min(res,moneyChange(change-1)+1);
	}
	a[change] = res;
	return res;
	
}
int main(){
	memset(a,0,sizeof(a));
	cout << moneyChange(2);
	return 0;
}
