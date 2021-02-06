#include <bits/stdc++.h>
using namespace std;
int main(){
	int n = 0 ;
	cin >> n;
	int a[n+20] = {0};
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n-1-i;j++){
			if(a[j] > a[j+1]){
				int num = a[j];
				a[j] = a[j+1];
				a[j+1] = num;
			}
		}
	}
	int b[n+20] = {0};	//0Êä³ö   1²»Êä³ö 
	int ty = 0;
	for(int i=0;i<n;i++){
		if(a[i] == a[i+1]){
			b[i] = 1;
		}
		else{
			ty++;
		}
	}
	cout << ty << endl;
	for(int i=0;i<n;i++){
		if(b[i] != 1){
			if(i != n-1){
				cout << a[i] << ' ';
			}
			else{
				cout << a[i];
			}
		}
	}
	return 0;
}
