#include <iostream>
using namespace std;
int max(int a=0,int b=0,int c=0){
	if(a > b && a > c){
		return a;
	}
	if(b > a && b > c){
		return b;
	}
	if(c > a && c > b){
		return c;
	}
}
int min(int a=0,int b=0,int c=0){
	if(a < b && a < c){
		return a;
	}
	if(b < a && b < c){
		return b;
	}
	if(c < a && c < b){
		return c;
	}
}
int middle(int a=0,int b=0,int c=0){
	if((a > b && a < c) || (a > c && a < b)){
		return a;
	}
	if((b > a && b < c) || (b > c && b < a)){
		return b;
	}
	if((c > a && c < b) || (c > b && c < a)){
		return c;
	}
}
int main(){
	int a,b,c = 0;
	string y;
	cin >> a >> b >> c >> y;
	//cout << max(a,b,c) << " " << min(a,b,c) << " " << middle(a,b,c);
	int max_num = max(a,b,c);
	int min_num = min(a,b,c);
	int middle_num = middle(a,b,c);
	for(int i=0;i<y.size();i++){
		if(y[i] == 'A'){
			if(i != y.size()-1){
				cout << min_num << " ";
			}
			else{
				cout << min_num;
			}
		}
		if(y[i] == 'B'){
			if(i != y.size()-1){
				cout << middle_num << " ";
			}
			else{
				cout << middle_num;
			}
		}
		if(y[i] == 'C'){
			if(i != y.size()-1){
				cout << max_num << " ";
			}
			else{
				cout << max_num;
			}
		}
	}
	return 0;
}
