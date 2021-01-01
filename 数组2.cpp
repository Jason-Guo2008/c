#include <bits/stdc++.h>
using namespace std;
int main() {
	int k;
	vector<int> vi(11);
	int n;
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> k;
		vi[k] = vi[k] + 1;
	}
	for(int i=0;i<10;i++){
		cout << vi[i] << ' ';
	}
	return 0;
}
