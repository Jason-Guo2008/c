#include <iostream>
using namespace std;
int a[5];
int main(){
	for(int i=0;i<3;i++){
		cin >> a[i];
	}
	for(int i=0;i<3;i++){
		for(int j=0;j<2-i;j++){
			if(a[j] > a[j+1]){
				int num = a[j];
				a[j] = a[j+1];
				a[j+1] = num;
			}
		}
	}
	for(int i=0;i<3;i++){
		if(i != 2){
			cout << a[i] << ' ';
		}
		else{
			cout << a[i];
		}
	}
	return 0;
}
