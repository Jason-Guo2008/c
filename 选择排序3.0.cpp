#include <bits/stdc++.h>
using namespace std;
int a[10] = {10,9,8,7,6,5,4,3,2,1};
int main(){
	int l = 0;
	for(int i=0;i<10;i++){
		int num_min = 999999999;
		int num = i;
		for(int j=i;j<10;j++){
			if(a[j] < num_min){
				num_min = a[j];
				num = j;
			}
		}
		if(num != i){
			int y = a[num];
			a[num] = a[i];
			a[i] = y;
		}
	}
	for(int i=0;i<10;i++){
		cout << a[i] << ' ';
	}
	return 0;
}
