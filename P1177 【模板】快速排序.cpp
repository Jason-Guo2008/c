#include <bits/stdc++.h>
using namespace std;
int a[1000000] = {0};
void quicksort(int s,int e){
	int mid_num = a[(s+e)/2];
	int i = s;
	int j = e;
	do{
		while(a[i] < mid_num){
			i++;
		}
		while(a[j] > mid_num){
			j--;
		}
		if(i <= j){
			int num = a[i];
			a[i] = a[j];
			a[j] = num;
			i++;
			j--;
		}
	}while(i <= j); 
	if(s < j){
		quicksort(s,j);
	}
	if(i < e){
		quicksort(i,e);
	}
}
int main(){
	long long n = 0;
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	quicksort(0,n-1);
	for(int i=0;i<n;i++){
		cout << a[i] << ' ';
	}
	return 0;
}
