#include <bits/stdc++.h>
using namespace std;
int main(){
	int n = 0;
	cin >> n;
	for(int i=0;i<n;i++){
		if(i == 0 || i == n-1){
			cout << "*****";
			if(i != n-1){
				cout << endl;
			}
		}
		else{
			cout << "*   *" << endl;
		}
	}
	return 0;
}
