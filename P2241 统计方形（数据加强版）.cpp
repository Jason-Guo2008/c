#include <bits/stdc++.h>
using namespace std;
unsigned long long function(unsigned long long n=0){
	int num = 0;
	for(int i=1;i<=n;i++){
		num = num + i;
	}
	return num;
} 
int main(){
	unsigned long long n,m = 0;
	cin >> n >> m;
	unsigned long long n2 = n;
	unsigned long long m2 = m;
	unsigned long long t = 1;
	unsigned long long square_num = 0; 
	unsigned long long rec_num = 0;
	while(t*t <= n*m){
		square_num = square_num + n2*m2;
		n2--;
		m2--;
		t++;
	}
	rec_num =  function(n) * function(m);
	rec_num = rec_num - square_num;
	cout << square_num << ' ' << rec_num;
	return 0;
}
