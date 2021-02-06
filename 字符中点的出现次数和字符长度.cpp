#include <bits/stdc++.h>
using namespace std;
int main(){
	string a;
	cin >> a;
	int num = 0;
	for(int i=0;i<a.size();i++){
		if(a[i] == '.'){
			num++;
		}
	}
	cout << a.size() << ' ' << num;
	return 0;
}
