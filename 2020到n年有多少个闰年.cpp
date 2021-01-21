#include <bits/stdc++.h>
using namespace std;
int main(){
	int n = 0;
	cin >> n;
	int num = 0;
	bool u = false;
	for(int i=2020;i<=n;i++){
		if(i % 4 == 0 && i % 100 != 0){
			num++;
			u = true;
		}
		if(u){
			if(i % 400 == 0){
				num++;
			}
		}
	}
	cout << num;
	return 0;
}
