#include <iostream>
using namespace std;
int a[] = {1,2,3,4,5,6};
int main(){
	int *p = a;
	cout << *a << endl;
	cout << *(a+3) << endl;
	cout << *p << endl;
	cout << *(p+2) << endl;
	cout << *p + 200; 
	return 0;
}
