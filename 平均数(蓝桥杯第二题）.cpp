#include <iostream>
using namespace std;
int a[20] = {0};
int main(){
	long double ans = 0;
	for(int i=0;i<10;i++){
		cin >> a[i];
	}
	int num_max = 0;
	int num_min = 9999;
	for(int i=0;i<10;i++){
		if(a[i] > num_max){
			num_max = a[i];
		}
		if(a[i] < num_min){
			num_min = a[i];
		}
	}
	for(int i=0;i<10;i++){
		if(a[i] != num_max && a[i] != num_min){
			ans = ans + a[i];
		}
	}
	ans = ans / 8;
	cout << ans;
	return 0;
} 
