#include <iostream>
using namespace std;
int main(){
	int n = 0;
	string a;
	cin >> n >> a;
	n = n % 26;
	for(int i=0;i<a.size();i++){
	    if(a[i] + n > 122){
	    	cout << char(a[i] + n - 26);
		}
		else{
			cout << char(a[i] + n);
		}
	}
	return 0;
} 
