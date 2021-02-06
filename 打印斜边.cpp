#include <bits/stdc++.h>
using namespace std;
int a[10][10] = {0};
int main(){
	int num = 0;
	for(int i=0;i<=5;i++){
		for(int j=0;j<=5;j++){
			cin >> a[i][j];
		} 
	}
	for(int i=0;i<5;i++){
  		for(int j=0;j<5;j++){
   			cout<<a[i][j]<<" ";
  			}
  		cout<<endl;
 	} 
	return 0; 
}
