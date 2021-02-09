#include <bits/stdc++.h>
using namespace std;
int main(){
	double v[1005],w[1005],vpw[1005];
	int n;
	cin >> n;
	int capacity;	// 背包的最大承重 
	cin >> capacity;
	for(int i=0;i<n;i++){
		cin >> w[i] >> v[i];
		vpw[i] = v[i] / w[i];
	}
	sort(vpw,vpw+n,greater<double>());
	double value = 0;
	for(int i=0;i<n;i++){
		if(capacity <= 0){
			break;
		}
		if(capacity >= w[i]){
			value += v[i];
			capacity -= w[i];
		}
		else{
			value += capacity * vpw[i];
			capacity = 0;
		}
	}
	cout << value;
	return 0;
}
