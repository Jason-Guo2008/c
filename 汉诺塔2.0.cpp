#include <iostream>
using namespace std;
void hanoi(int n,char a,char b,char c){
	if (n == 0){
		return ;
	}
	hanoi(n-1,a,b,c);
	cout << a << "->" << n << "->" << b << endl;
	hanoi(n-1,c,a,b);
}
int main(){
	int n = 0;
	char a,b,c;
	cin >> n >> a >> b >> c;
	hanoi(n,a,b,c);
	return 0;
}
