#include <iostream>
using namespace std;
int main(){
	int a = 0;
	int b = 0;
	int *p;
	cin >> a >> b;
	if(a > b){
		p = &b;
	}
	if(b > a){
		p = &a;
	}
	cout << *p * 10;
	return 0;
}
