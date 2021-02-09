#include <bits/stdc++.h>
using namespace std;
const int N  = 15;
int n,a[N];
bool used[N];
void search(int x){
	if(x == n+1){
		for(int i=1;i<=n;i++){
			cout << a[i] << ' '; 
		}
		cout << endl;
		return;
	}
	for(int i=1;i<=n;i++){
		if(!used[i]){
			a[x] = i;
			used[i] = true;
			search(x+1);
			used[i] = false;// 撤销标记以便重新尝试 
		}
	}
}
int main(){
	cin >> n;
	search(1);
	return 0;
} 
