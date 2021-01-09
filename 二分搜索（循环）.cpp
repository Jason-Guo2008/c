#include <bits/stdc++.h>
using namespace std;
vector<int> vi;
int binary_search(int value){
	int s = 0;
	int e = vi.size()-1;
	while(s <= e){
		int mid = (s+e) / 2;
		if(vi.at(mid) == value){
			return mid;
		}
		else if(vi.at(mid) > value){
			e--;
		}
		else{
			s++;
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
	cout << binary_search(54);
	return 0;
}
