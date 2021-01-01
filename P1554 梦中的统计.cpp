#include <bits/stdc++.h>
using namespace std;
int main(){
	int m,n = 0;
	cin >> m >> n;
	int a = 0; 
	int num = 0;
	int b[20] = {0};
	for(int i=m;i<=n;i++){
		a = i;
		while(a != 0){
			num = a % 10;
			b[num]++;
			a = a / 10;
			}
		}
	for(int i=0;i<10;i++){
		cout << b[i] << ' ';
	}
	return 0;
}
