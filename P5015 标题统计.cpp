#include <iostream>
using namespace std;
int main(){
	string a;
	getline(cin,a);
	int num = 0;
	for(int i=0;i<a.size();i++){
		if(a[i] != ' '){
			num++;
		}
	}
	cout << num;
	return 0;
}
