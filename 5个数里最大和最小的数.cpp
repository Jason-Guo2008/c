#include <bits/stdc++.h>
using namespace std;
int main(){
	int num = 0;
	int num_max = 0;
	unsigned long long num_min = 999999999999999999;
	for(int i=0;i<5;i++){
		cin >> num;
		if(num < num_min){
			num_min = num;
		}
		if(num > num_max){
			num_max = num;
		}
	}
	cout << num_max << ' ' << num_min;
	return 0;
}
