#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n=0;
	cin >> n;
	int a[n];
	int t;
	// ���� 
	for (int i=0;i<n;i++){
		cin >> a[i];
	}
	for(int r=0;r < n;r++){	// ���� 
		bool isSorted = true;
		for (int i=0;i<n-1-r;i++){
			if(a[i] > a[i+1]){
				t = a[i+1];
				a[i+1] = a[i];
				a[i] = t;
				isSorted = false;
			}
		}
		if(isSorted){
			break;
		}
	}	
	// ��ӡ 
	for (int i=0;i<n;i++){
		if (i == n){
			cout << a[i];
		}
		else{
			cout << a[i] << " ";
		}
	}
	return 0;
}
