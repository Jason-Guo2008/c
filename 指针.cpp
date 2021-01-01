#include <iostream>
using namespace std;
int main(){
	int a = 10;
	cout << a << endl;
	cout << &a << endl;
	int *p = &a;
	cout << *p <<endl;
	cout << p << endl;
	cout << &p << endl;
}
