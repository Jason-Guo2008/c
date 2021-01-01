#include <bits/stdc++.h>
#define MAXN 1001
int a[MAXN];
int b[MAXN];
using namespace std;
int main(){
	int n;
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> a[i];
		b[i] = a[i];
		a[i] = a[i] * 1001 + i + 1;
	}
	sort(a,a+n);
	sort(b,b+n);
	for(int i=0;i<n;i++){
		if(i != n-1){
			cout << a[i] % 1001 << ' ';
		}
		else{
			cout << a[i] % 1001;
		}
	}
	cout << endl;
	double num = 0;
	int p = n;
	for(int i=0;i<n;i++){
		num += b[i]*(p-1);
		p--;
	}
	printf("%.2lf",num/n);
	return 0;
}
