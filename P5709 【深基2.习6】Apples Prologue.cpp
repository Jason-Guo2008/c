#include <iostream>
using namespace std;
int main(){
	int m,t,s = 0;		// m:总共的苹果数量 t:吃一个苹果花费的时间 s:时间过去了多久
	cin >> m >> t >> s;	
	if(t != 0){
		if(s % t != 0){
			cout << max(m -  s/t-1,0);
		}
		else{
			cout << max(m - s/t,0);
		}
	}
	else{
		cout << 0;
	}
	return 0;
}
