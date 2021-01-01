#include <bits/stdc++.h>
using namespace std;
int main(){
	int money = 0;
	cin >> money;
	int a[10];
	memset(a,0,sizeof(a));
	while(money != 0){
		if(money >= 25){
			money -= 25;
			a[0]++;
			continue;
		}
		if(money >= 10){
			money -= 10;
			a[1]++;
			continue;
		}
		if(money >= 5){
			money -= 5;
			a[2]++;
			continue;
		}
		if(money >= 1){
			money -= 1;
			a[3]++;
			continue;
		}
	}
	cout << "Change:";
	for(int i=0;i<4;i++){
		if(i == 0){
			cout << "Quarters:" << a[i] << ' ';
		}
		if(i == 1){
			cout << "Dime:" << a[i] << ' ';
		}
		if(i == 2){
			cout << "Nickel:" << a[i] << ' ';
		}
		if(i == 3){
			cout << "Cents:" << a[i] << ' ';
		}
	}
	return 0;
}
