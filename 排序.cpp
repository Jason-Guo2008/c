#include <bits/stdc++.h>
#define MAX 21
using namespace std;
int main(){
	int k = 0;
	vector<int> vi(MAX);
	int N = 0;
	cin >> N;
	vector<int> vnew(N);
	vector<int> vold(N);
	for(int i=0;i<N;++i){
		cin >> k;
		vold[i] = k;
		vi[k] = vi[k] + 1;
	}
	for(int i=1;i<MAX;++i){
		vi[i] += vi[i-1];
	}
	for(int i=N-1;i>=0;--i){
		//vnew[vi[vold[i]-1]] = vold[i];
		int count = vi[vold[i]];
		vnew[count-1] = vold[i];
		vi[vold[i]]--;
	}
	for(int i=0;i<N;++i){
		cout << vnew[i] << ' ';
	}
	return 0;
}
