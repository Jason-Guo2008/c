#include <bits/stdc++.h>
using namespace std;
int main(){
	int month,day,sum = 0;
	cin >> month >> day;
	int a[13] = {0,31,29,31,30,31,31,31,30,30,31};
	for(int i=12;i>month;i--){
		sum+=a[i];
	}
	sum +=a[month]-day+1;
	cout << sum;
	return 0;
}
