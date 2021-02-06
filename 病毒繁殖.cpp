#include <iostream>
using namespace std;
int a[80];
int main(){
	a[0] = 1;
	a[1] = 1;
	a[2] = 1;
	a[3] = 1;
	a[4] = 2;
	a[5] = 3;
	a[6] = 4;
	/***a[7] = 5;
	a[8] = 7;
	a[9] = 10;***/
	int n = 0;
	cin >> n;
	if(n > 7){
		int j = 1;
		int num = 0;
		for(int i=7;i<=n;i++){
			num = a[i-1] + j;
			j++;
		}
		cout << num;
	}
	else{
		cout << a[n-1];
		return 0;
	}
	return 0;
}
