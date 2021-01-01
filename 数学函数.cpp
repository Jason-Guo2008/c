#include <iostream>
using namespace std;
int fun(int x=0){
	if (x <= 0){
		return 0;
	}
	if (x == 1){
		return 1;
	}
	if (x > 1 && x % 2 == 0){
		return 3 * fun(x / 2) - 1;
	}
	if (x > 1 && x % 2 == 1){
		return 3 * fun((x+1) / 2) - 1;
	}
}
int main(){
	int number = 0;
	cin >> number;
	cout << fun(number);
	return 0;
}
