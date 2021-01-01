#include <iostream>
#include<string>
using namespace std;
int a,b,c = 0;
bool isNumber(int n){
 	string s = to_string(n);
 	int sum,u;
 	for(int i=0;i<3;i++){
  	u=s[i]-48;
  	sum+=u*u*u;
 	}
 	if(sum==n){
 		return true;
	}
 	else{
	 return false;
	}
}
	/***int a,b,c;
	for(int i=100;i<1000;i++){
		a = i / 100;
		b = i / 10 % 10;
		c = i % 10;
		if(a*a*a + b*b*b + c*c*c == i){
			cout << i << endl;
		} 看范围内里的数里有没有水仙花 
	}***/
	int main(){
 	for(int i=100;i<1000;i++){
  	if(isNumber(i)){
  		cout<<i<<endl;//位数的立方和 和 数字本身是否相等
	  }
 	}
   return 0;
}
