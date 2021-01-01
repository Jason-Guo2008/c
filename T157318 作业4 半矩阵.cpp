#include <bits/stdc++.h>
using namespace std;
int main(){
	int a[99][99];
	bool b[99][99];
	for(int i=0;i<99;i++){
		for(int j=0;j<99;j++){
			b[i][j] = false;
		}
	}
	int n = 0;
	cin >> n;
	int o = 2;
	memset(a,0,sizeof(a));
	if(n < 2){
		cout << 0;
		return 0;
	}
	else{
		for(int i=0;i<n;i++){
			a[i][0] = 0;
			b[i][0] = true;
			for(int j=1;j<o-1;j++){
				a[i][j] = j;
				b[i][j] = true;
			}
			o++;
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(b[i][j] == true){
				if(j != n-1){
					cout << a[i][j] << ' ';
				}
				else{
					cout << a[i][j];
				}
			}
			else{
				if(j != n-1){
					cout << '*' << ' ';
				}
				else{
					cout << '*';
				}
			}
		}
		if(i != n-1){
			cout << endl;
		}
	}
	return 0;
} 
