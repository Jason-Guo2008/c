#include <bits/stdc++.h>
using namespace std;
vector<int> vi;
int binary_search(int s,int e,int value){
	if(s > e){
		return -1;
	}
	else{
		int mid = (s+e) / 2;
		if(vi.at(mid) == value){
			return mid;
		}
		else if(vi.at(mid) > value){
			return binary_search(s,mid-1,value);
		}
		else{
			return binary_search(mid+1,e,value);
		}
	}
}
int main(){
	// ≈≈–Ú 
	vi.push_back(8);
	vi.push_back(9);
	vi.push_back(30);
	vi.push_back(54);
	vi.push_back(63);
	vi.push_back(72);
	cout << binary_search(0,vi.size()-1,90);
	return 0;
}
