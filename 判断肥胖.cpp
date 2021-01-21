#include <bits/stdc++.h>
using namespace std;
int main(){
	int height,weight;
	cin >> height >> weight;
	int standard_weight = (height - 100) * 0.9;
	if(weight < standard_weight * 0.9){
		cout << "thin";
	}
	else if(weight > standard_weight * 1.1){
		cout << "fat";
	}
	else{
		cout << "standard";
	}
	return 0;
}
