#include <iostream>
using namespace std;
int main(){
	void *p;
	int a = 10;
	float b = 1.5;
	p = &a;
	cout << *(int *)p;
}
