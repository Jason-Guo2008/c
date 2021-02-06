#include <bits/stdc++.h>
using namespace std;
int a[500][500] = {0};
int ans[500] = {0};
int chinese[500] = {0};
void sort_1(int n=0){
	for(int i=0;i<n;i++){
		for(int j=0;j<n-1-i;j++){
			if(ans[j] < ans[j+1]){
				int num = ans[j+1];
				ans[j+1] = ans[j];
				ans[j] = num;
			}
		}
	}
}
int main(){
	int n = 0;
	int ans2 = 0;
	cin >> n;
	int q,num = 0;
	for(int i=0;i<n;i++){
		for(int j=0;j<3;j++){
			cin >> a[i][j];
		}
	}// 输入 
	for(int i=0;i<n;i++){
		for(int j=0;j<3;j++){
			ans2 = ans2 + a[i][j];
			if(j == 0){
				chinese[i] = a[i][j];
			}
		}
		ans[i] = ans2*10000+(i+1);	// 标记 
		ans2 = 0;	
	}// 算每一个人的总分 
	sort_1(n);
	// 排序
	int o,p = 0;	// o记和 p记第几个
	int r,t = 0;
	bool pp = false;
	for(int i=0;i<5;i++){
		if(ans[i] == ans[i+1]){
			if(chinese[i] < chinese[i+1]){
				r = ans[i+1] / 10000;
				t = ans[i+1] % 10000;
				pp = true;
			}
			else{
				if(ans[i]%10000 > ans[i+1]%10000){
					r = ans[i+1] / 10000;
					t = ans[i+1] % 10000;
					pp = true;
				}
			}
		}
		if(pp){
			if(i != 4){
				cout << t << ' ' << r << endl;
			}
			else{
				cout << t << ' ' << r;
			}
			pp = false;
			continue;
		}
		o = ans[i] / 10000;
		p = ans[i] % 10000;
		if(i != 4){
			cout << p << ' ' << o << endl;
		}
		else{
			cout << p << ' ' << o;
		}
	}
	return 0;
}
