#include <iostream>
#include <cstdio>
using namespace std;
int main(){
	int n = 0;
	int a,a1 = 0;
	int b,b1 = 0;
	int c,c1 = 0;
	int money[5] = {0};		// ��¼������װ����Ҫ��Ǯ�� 
	int bag = 0;	// ��¼���ٰ�װ 
	double o = 0;	// ��¼����֮����� 
	cin >> n >> a >> a1 >> b >> b1 >> c >> c1;
	o = (n*1.0) / (a*1.0);
	if(o != (int)o){
		bag = n / a + 1;
	}
	else{
		bag = n / a;
	}
	money[0] = bag * a1;
	bag = 0;
	o = 0;
	//����������������������������������������
	o = (n*1.0) / (b*1.0);
	if(o != (int)o){
		bag = n / b + 1;
	}
	else{
		bag = n / b;
	}
	money[1] = bag * b1;
	bag = 0;
	o = 0;
	//����������������������������������������
	o = (n*1.0) / (c*1.0);
	if(o != (int)o){
		bag = n / c + 1;
	}
	else{
		bag = n / c;
	}
	money[2] = bag * c1;
	bag = 0;
	o = 0;
	//����������������������������������������
	int min = 10000000;
	for(int i=0;i<3;i++){
		if(money[i] < min){
			min = money[i];
		}
	} 
	cout << min;
	return 0;
}
