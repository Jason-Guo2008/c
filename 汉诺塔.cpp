#include <iostream>
using namespace std;
void hanoi(int n,char a,char b,char c){		// a����ʼ�ˣ�b���н�ˣ�c��Ŀ��� 
	if (n == 0){
		return ;
	}
	hanoi(n-1,a,c,b);
	cout << n << "��" << a << "�ƶ���" << c << endl;
	hanoi(n-1,b,a,c);
}
int main(){
	int n = 0;
	cin >> n;
	hanoi(n,'A','B','C');
	return 0;
}
