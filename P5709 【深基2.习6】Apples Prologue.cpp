#include <iostream>
using namespace std;
int main(){
	int m,t,s = 0;		// m:�ܹ���ƻ������ t:��һ��ƻ�����ѵ�ʱ�� s:ʱ���ȥ�˶��
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
