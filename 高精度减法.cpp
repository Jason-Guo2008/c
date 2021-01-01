#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int a[500],b[500],c[501],ans[501];
int len_a,len_b,len_ans;
void Read(int *a,int &len){
	string cur;
	cin >> cur;
	len = cur.length();
	for(int i=0;i<len;i++){
		a[i] = cur[i] - 48;
	}
	reverse(a,a+len);
}
int main(){
	Read(a,len_a);
	Read(b,len_b);
	len_ans = len_a;
	for(int i=0;i<len_ans;i++){
		ans[i] = a[i] - b[i] - c[i];
		if(ans[i] < 0){
			c[i+1]++;
			ans[i] += 10;
		}
	}
	while(len_ans > 1 && ans[len_ans-1] == 0){
		len_ans--;
	}
	for(int i=len_ans - 1;i >= 0;i--){
		cout << ans[i];
	}
	return 0;
}
