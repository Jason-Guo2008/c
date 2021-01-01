#include <bits/stdc++.h>
using namespace std;
int euclid(int a = 0,int b = 0){
	if(a % b == 0){
		return b;
	}
	return euclid(b,a % b);
}
int main(){
	int a[5];
	int n = 0;
	for(int i=0;i<3;i++){
		cin >> n;
		a[i] = n;
	}
	sort(a,a+3);
	int max = 0;
	int min = 1000000001;
	for(int i=0;i<3;i++){
		if(max < a[i]){
			max = a[i];
		}
		if(min > a[i]){
			min = a[i];
		}
	}
	int num = euclid(max,min);
	max = max / num;
	min = min / num;
	cout << min << "/" << max;
	return 0;
}
