#include <iostream>
using namespace std;
int a[10001] = {0};
void primeList(){
	a[0] = 1;
	a[1] = 1;
	for(int i=2;i*i<=10001;i++){
		if(a[i] == 0){
			for(int j=2;i*j<=10001;j++){
				a[i*j] = 1;
			}
		}
	}
	return ;
}
int main(){
	int n;
	cin >> n;
	int sum=0;
	primeList();
	for(int i=2;i<=n/2;i++){
		if(a[i] == 0 && a[n-i] == 0){
			sum++;
			cout << i << " " << n-i << endl; 
		}
	}
	cout << sum;
}
