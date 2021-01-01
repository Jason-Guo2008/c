#include <bits/stdc++.h>
using namespace std;
int main(){
	int numOfMatches[10] = {6,2,5,5,4,5,6,3,7,6};
	int total[2100];
	int n;
	cin >> n;
	int temp;
	total[0] = 6;
	for(int i=1;i<=2000;i++){
		int k=i;
		temp = 0;
		while(k > 0){
			total[i] += numOfMatches[k%10];
			k = k/10;
		}
		total[i] = temp;
	}
	int ans = 0;
	for(int i=0;i<=999;i++){
		for(int j=0;j<=999;j++){
			if(total[i] + total[j] + total[i+j]+4 == n){
				ans++;
				//cout << numOfMatches[i] << ' ' <<  numOfMatches[j] << ' ' << numOfMatches[i+j] << endl;
			}
		}
	}
	cout << ans;
	return 0;
} 
