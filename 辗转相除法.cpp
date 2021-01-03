#include <iostream>
using namespace std;
int fun(int a=0,int b=0)
{
	if (a % b == 0)
	{
		return b;
	}
	return fun(b,a%b);
}
int main()
{
	int a,b=0;
	cin >> a >> b;
	cout << fun(a,b);
	return 0;
}
