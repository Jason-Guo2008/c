#include <bits/stdc++.h>
using namespace std;
int main(){
	int num = 0;
	for(int i=1;i<100;i++){
		for(int j=i+1;j<=100;j++){
			if(i + j < 100){
				num++;
				cout << i << " " << j << endl;
			}
		}
	}
	cout << num;
	return 0;
}
