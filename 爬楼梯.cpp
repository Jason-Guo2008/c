#include <iostream>
using namespace std;
int fun(int n=0){
	if (n <= 1){
		return 1;
	}
	return fun(n-1) + fun(n-2);
}
int main(){
	int num = 0;
	for (int i=0;i<2;i++){
		cin >> num;
		cout << fun(num);
	}
	cin >> num;
	cout << fun(num);
	return 0;
}
