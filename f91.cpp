#include <iostream>
using namespace std;
int f91(int n=0){
	if(n <= 100){
		return f91(f91(n+11));
	}
	if (n >= 101){
		return n - 10;
	}
}
int main(){
	int num=5;
	while (1){
		cin >> num;
		if (num == 0){
			break;
		}
		cout << "f91(" << num << ") = " << f91(num) << endl;
	}
	return 0;
}
