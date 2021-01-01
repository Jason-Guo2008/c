#include <iostream>
#include <cstdio>
using namespace std;
int main(){
	int num = 0;
	cin >> num;
	double num_under150 = 0;
	double num_from151to400 = 0;
	double num_up401 = 0;
	double sum = 0;
	if(num <= 105){
		num_under150 = num * 0.4463;
		printf("%.1lf",num_under150);
	}
	else{
		if(num <= 400){
			num_under150 = 150 * 0.4463;
			num_from151to400 = (num - 150) * 0.4663;
			sum = num_under150 + num_from151to400;
			printf("%.1lf",sum);
		}
		else{
			num_under150 = 150 * 0.4463;
			num_from151to400 = 250 * 0.4663;
			num_up401 = (num - 150 - 250) * 0.5663;
			sum = num_under150 + num_from151to400 + num_up401;
			printf("%.1lf",sum);
		}
	}
	return 0;
}
