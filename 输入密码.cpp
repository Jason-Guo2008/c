#include <bits/stdc++.h>
using namespace std;
int N;
string password;
void getPassword(string passwordSoFar,int i){
	passwordSoFar += i + '0';
	if(passwordSoFar.length() == N){
		if(passwordSoFar == password){
			cout << "Found" << endl;
		}
	}
	else{
		for(int j=0;j<10;j++){
			getPassword(passwordSoFar,j);
		}
	}
}
int main(){
	cin >> N;
	cin >> password;
	for(int i=0;i<10;i++){
		getPassword("",i);
	}
	return 0;
}
