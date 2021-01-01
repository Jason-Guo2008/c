#include <bits/stdc++.h>
using namespace std;
int main(){
	string a;
	string b;
	cin >> a >> b;
	int a_n = 1;
	int num = 0;
	for(int i=0;i<a.size();i++){
		num = (int)a[i]-64;
		a_n = a_n * num;
	}
	a_n = a_n % 47;
	int b_n = 1;
	num = 0;
	for(int i=0;i<b.size();i++){
		num = (int)b[i]-64;
		b_n = b_n * num;
	}
	b_n = b_n % 47;
	if(a_n == b_n){
		cout << "GO";
	}
	else{
		cout << "STAY";
	}
	return 0;
}
