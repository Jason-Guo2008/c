#include <bits/stdc++.h>
using namespace std;
int main(){
	int num = 0;
	for(int i=0;i<9;i++){
		for(int j=i+1;j<=9;j++){
			if(i + j > 10){
				num++;
				cout << i << " " << j << endl;
			}
		}
	}
	cout << num;
	return 0;
}
