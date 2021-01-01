#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;
int main(){
	double a,b,c=0;
	cin >> a >> b >> c;
	double p = 0.5 * (a + b + c);
	double number = sqrt(p*(p-a)*(p-b)*(p-c));
	printf("%.1lf",number);
	return 0;
}
