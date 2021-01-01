#include <iostream>
using namespace std;
int fun(int n=0){
	if (n == 1){
		return 1;
	}
	return (fun(n-1)+1) * 2;
}
int main(){
	int n = 0;
	cin >> n;
	cout << fun(n);
	return 0;
}
