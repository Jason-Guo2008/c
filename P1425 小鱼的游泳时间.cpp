#include <iostream>
using namespace std;
int main(){
	int a,b,c,d=0;
	cin >> a >> b >> c >> d;
	int q = c - a;
	int w = d - b;
	if(w < 0){
		q = q - 1;
		w = w + 60;
	}
	cout << q << " " << w;
	return 0;
}
