#include <bits/stdc++.h>
using namespace std;
int main(){
	int k;
	vector<int> vi(100);
	int N;
	cin >> N;
	// 读入元素组 
	for(int i=0;i<N;i++){
		cin >> vi[i];
	}
	for(int r=0;r < N;r++){
		bool isSorted = true;
		for(int i=0;i < N-1;i++){
			if(vi[i] > vi[i+1]){
				isSorted = false;
				break;
			}
		}
		// 判断是否排序成功 
		if(isSorted){
			break;
		} 
		int maxIndex = 0;
		for(int i=0;i < N-r;i++){
			if(vi[i] > vi[maxIndex]){
				maxIndex = i;
			}
		}
		if(maxIndex != N-1-r){
			int temp = vi[maxIndex];
			vi[maxIndex] = vi[N-1-r];
			vi[N-1-r] = temp;	
		}
	}
	// 选择排序                                                                               
	// 打印数组 
	for(int i=0;i<N;i++){
		cout << vi[i] << ' ';
	}
	return 0;
}
