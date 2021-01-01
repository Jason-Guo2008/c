#include <iostream>
using namespace std;
int sum=1;
int fun(int a)
{
	if (a == 0)
	{
		return 0;
	}
	sum = sum * a;
	return fun(a-1);
}
int main()
{
	int n;
	cin >> n;
	fun(n);
	cout << sum;
	return 0;
}
