#include <bits/stdc++.h>
using namespace std; 
int main(){
	vector<int> vi(100);
	int n;
	cin >> n;
	//����Ԫ���� 
	for(int i=0;i<n;i++){
		cin >> vi[i];
	}
	//�������� 
	for(int i=1;i<n;i++){
		int key = vi[i];
		int j = i-1;
		while(j >= 0 && key < vi[j]){
			vi[j+1] = vi[j];
			j--;
		}
		vi[j+1] = key;
	}
	for(int i=0;i<n;i++){
		cout << vi[i] << ' ';
	}
	return 0;
}
