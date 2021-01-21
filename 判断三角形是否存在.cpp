#include <bits/stdc++.h>
using namespace std;
int main(){
	int a,b,c = 0;
	cin >> a >> b >> c;
	if(a + b > c){
		if(a - b < c){
			if(a + c > b){
				if(a - c < b){
					if(b + c > a){
						if(b - c < a){
							cout << 1;
							return 0;
						}
					}
				}
			}
		}
	}
	cout << 0;
	return 0;
}
