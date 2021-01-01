#include <bits/stdc++.h>
using namespace std;
int main() {
	int i;
	vector<int> vi(11);
	int n;
	cin >> n;
	int k = 0;
	for(int i=0;i<n;i++){
		cin >> k;
		vi.at(k) = vi.at(k) + 1;
	}
	for(int i=0;i<10;i++){
		cout << vi.at(i) << ' '; 
	} 
	return 0;
}
