#include <bits/stdc++.h>
using namespace std;
void han_nuo(int n,char from,char to,char use){
	if(n == 1){
		cout << "Move from " << from << "to " << to << "useing " << use << endl;
	}
	else{
		han_nuo(n-1,from,use,to);
		cout << "Move from " << from << "to " << to << "using " << use << endl;
		han_nuo(n-1,use,to,from);		
	}
}
int main(){
	han_nuo(3,'a','c','b');
	return 0;
}
