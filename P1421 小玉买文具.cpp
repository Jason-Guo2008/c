#include <iostream>
using namespace std;
int main(){
	int a = 0;
	int b = 0;
	cin >> a >> b;
	double b2 = (double)b / 10;
	double sum = (double)a + b2;
	cout << (int)(sum / 1.9);
	return 0;
}
