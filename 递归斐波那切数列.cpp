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
	for (int i=1;i<=number;i++){
		if (i == number){
			cout << fun(i);
		}
		else{
			cout << fun(i) << " ";	
		}
	}
	return 0;
	
}
