#include <iostream>
using namespace std;
int main(){
	double a = 0;
	double b = 0;
	double *a2 = &a;
	double *b2 = &b;
	cin >> a >> b;
	if(*a2 > *b2){
		cout << a;
	}
	if(*b2 > *a2){
		cout << b;
	}
	return 0;
}
