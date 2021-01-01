#include <bits/stdc++.h>
using namespace std;
int main() {
	int k;
	vector<int> vi(26);
	string s;
	cin >> s;
	for(int i=0;i<s.length();i++){
		int k = s[i] - 'a';
		vi[k] = vi[k] + 1;
	}
	for(int i=0;i<26;i++){
		char c = i + 'a';
		cout << c << ' ';
	}
	cout << endl; 
	for(int i=0;i<26;i++){
		cout << vi[i] << ' ';
	}
	return 0;
}
