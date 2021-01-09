#include <bits/stdc++.h>
using namespace std;
vector<int> vi;
/*** 
	a + b = x
	a = ?	b = ?
	a和b可以是4,7,8,13,18,21,23,30中任意一个数
	a和b不能相等 
***/
void EndSearch(int value){
	int s = 0;
	int e = vi.size()-1;
	while(s < e){
		if(vi[s] + vi[e] == value){
			cout << s << "," << e;
			return ;
		}
		else if(vi[s] + vi[e] > value){
			e--;
		}
		else{
			s++;
		}
	}
	cout << "No";
}
int main(){
	// 排序 
	vi.push_back(4);
	vi.push_back(7);
	vi.push_back(8);
	vi.push_back(13);
	vi.push_back(18);
	vi.push_back(21);
	vi.push_back(23);
	EndSearch(30);
	return 0;
}
