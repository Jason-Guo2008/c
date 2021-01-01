#include <iostream>
using namespace std;
int fun(int n=0){
	if (n == 1 || n == 2){
		return 1;
	}
	return fun(n-2) + fun(n-1); 
}
int main(){
	int number = 0;
	cin >> number;
	int number_2 = 0;
	for (int i=0;i<number;i++){
		cin >> number_2;
		if (i == number-1){
			cout << fun(number_2);
		}
		else{
			cout << fun(number_2) << endl;
		}
	}
	return 0;
}
