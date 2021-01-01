#include <bits/stdc++.h>
using namespace std;
int main(){
	int ans = 20;
	int bottle = 20;
	int coke;
	while(bottle > 1){
		coke = bottle / 2;
		ans += coke;
		bottle = coke + bottle % 2;
	}
	if(bottle == 1){
		ans += 1;
	}
	cout << ans;
	return 0;
}
