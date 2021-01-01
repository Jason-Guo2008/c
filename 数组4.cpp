#include <bits/stdc++.h>
#define MAX 10001
using namespace std;
int main(){
	int k;
	vector<int> vi(MAX);
	int n;
	cin >> n;
	int u = 0;
	for(int i=0;i<n;i++){
		cin >> k;
		vi[k] = vi[k] + 1;
	}
	for(int i=1;i<MAX;i++){
		if(vi[i] > 0){
			if(vi[i] > 1){
				while(u != vi[i]){
					cout << i << ' ';
					u++;
				}
				u = 0;
			}
			else{
				cout << i << ' ';
			}
			
		}
	}
	return 0;
}
