#include <bits/stdc++.h>
using namespace std;
int a[1000];
int op[9999] = {0};
int main(){
	string q;
	int num1,num2,num3,num4 = 0;
	for(int i=0;i<4;i++){
		getline(cin,q);
		if(i == 0){
			num1 = q.size();
		}
		if(i == 1){
			num2 = q.size();
		}
		if(i == 2){
			num3 = q.size();
		}
		if(i == 3){
			num4 = q.size();
		}
		for(int j=0;j<q.size();j++){
			a[j] = (int)q[j];
		}
	}
	for(int i=0;i<num1;i++){
		op[a[i]]
	}
	return 0;
}
