#include <iostream>
using namespace std;
int main(){
	int year,month = 0;
	cin >> year >> month;
	if(month == 1){
		cout << 31;
	}
	if(month == 2){
		if((year % 4 == 0 && year % 100 != 0) || year % 400 == 0){
			cout << 29;
		}
		else{
			cout << 28;
		}
	}
	if(month == 3){
		cout << 31;
	}
	if(month == 4){
		cout << 30;
	}
	if(month == 5){
		cout << 31;
	}
	if(month == 6){
		cout << 30;
	}
	if(month == 7){
		cout << 31;
	}
	if(month == 8){
		cout << 31;
	}
	if(month == 9){
		cout << 30;
	}
	if(month == 10){
		cout << 31;
	}
	if(month == 11){
		cout << 30;
	}
	if(month == 12){
		cout << 31;
	}
	return 0;
}
