#include <iostream>
using namespace std;
void hanoi(int n,char a,char b,char c){		// a是起始杆，b是中介杆，c是目标杆 
	if (n == 0){
		return ;
	}
	hanoi(n-1,a,c,b);
	cout << n << "从" << a << "移动到" << c << endl;
	hanoi(n-1,b,a,c);
}
int main(){
	int n = 0;
	cin >> n;
	hanoi(n,'A','B','C');
	return 0;
}
