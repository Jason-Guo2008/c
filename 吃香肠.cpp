#include <iostream>
using namespace std;
int fun(int n=0,int m=0){
	if (n % m == 0){
		return m;
	}
	return fun(m,n%m);
}
int main(){
	int n,m=0;
	cin >> n >> m;
	cout << m - fun(n,m);
	return 0;
}
