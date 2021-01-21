#include <bits/stdc++.h>
using namespace std;
int main(){
	int n = 0;
	cin >> n;
	for(int i=0;i<n;i++){
		for(int j=0;j< n-(n-(i+1));j++){
			cout << '*';
		}
		if(i != n-1){
			cout << endl;
		}
	}
	return 0;
}
