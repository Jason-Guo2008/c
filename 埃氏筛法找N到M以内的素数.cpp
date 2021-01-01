#include <iostream>
using namespace std;
int a[1000001] = {0};
void primeList(){
	for(int i=2;i*i<=1000001;i++){
		if(a[i] == 0){
			for(int j=2;i*j<=1000001;j++){
				a[i*j] = 1;
			}
		}
	}
	return ;
}
int main(){
	a[0] = 1;
	a[1] = 1;
	int n,m=0;
	cin >> n >> m;
	primeList();
	for (int i=n;i<m;i++){
		if(a[i] == 0){
			cout << i << endl;
		}
	}
	return 0;
}
