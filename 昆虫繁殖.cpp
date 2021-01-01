#include <iostream>
using namespace std;
long long ins[52];
int main()
{
	int x=0;
	unsigned long long z=0;
	int y=1;
	cin >> x >> y >> z;
	ins[1] = 1;
	for (int i=2;i<=x;i++)
	{
		ins[i] = 1;
	}
	for (int i=x+1;i<=z+1;i++)
	{
		ins[i] = ins[i-1] + ins[i-2-x]*y;
	}
	cout << ins[z+1];
	return 0;
}
