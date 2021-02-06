#include <iostream>
using namespace std;
int a[10] = {0};
int main(){
	int n = 0;
	cin >> n;
	int s,f,m = 0;
	f = n / 60;
	s = f / 60;
	if(f%60 > 0){
		f = f % 60;
	}
	if(f%60 == 0){
		f = 0;
	}
	m = n % 60;
	if(n%60 == 0){
		n = 0;
	}
	a[0] = s;
	a[1] = f;
	a[2] = m;
	for(int i=0;i<3;i++){
		if(a[i] < 10){
			if(i != 2){
				cout << 0 << a[i] << ':';
			}
			else{
				cout << 0 << a[i];
			}
		}
		if(a[i] >= 10){
			if(i != 2){
				cout << a[i] << ':';
			}
			else{
				cout << a[i];
			}
		}
	}
	return 0;
}
