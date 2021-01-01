#include <iostream>
using namespace std;
int judge(int n=0){
	int a=0;
	for(int i=2;i<n;i++){
		if(n % i == 0){
			a = a + 1;
		}
	}
	if(a == 0){
		return 1;
	}
	else{
		return 0;
	}
}
int main(){
	int n=0;
	cin >> n;
	for(int i=n;i>0;i--){
		if(judge(i) == 1 && n % i == 0){
			cout << i;
			break;
		}
	}
	return 0;
}
