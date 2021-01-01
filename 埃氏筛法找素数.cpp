#include <iostream>
using namespace std;
int a[101] = {0};
void primeList(){
	for(int i=2;i*i<=101;i++){
		if(a[i] == 0){
			for(int j=2;i*j<=101;j++){
				a[i*j] = 1;
			}
		}
	}
	return ;
}
int main(){
	a[0] = 1;
	a[1] = 1;
	primeList();
	for (int i=0;i<101;i++){
		if(a[i] == 0){
			if (i == 97){
				cout << i;
			}
			else{
				cout << i << endl;
			}
		}
	}
	return 0;
}
