#include <iostream>
using namespace std;
int main(){
	string number;
	cin >> number;
	for(int i=number.size()-1;i>=0;i--){
		cout << number[i];
	}
	return 0;
}
