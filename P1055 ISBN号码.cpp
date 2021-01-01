#include <iostream>
using namespace std;
char isbn_num[20];
int isbn_num2[20];
int main(){
	string isbn;
	cin >> isbn;
	int m = 0;
	for(int i=0;i<isbn.size();i++){
		if(isbn[i] == '-'){		// 数字直接用它的字符来存，“—”用“s”来存，“X”用“q”来存 
			isbn_num[i] = 's';
		}
		if(isbn[i] != '-'){
			if(isbn[i] != 'X'){
				isbn_num[i] = isbn[i];
			}
			else{
				isbn_num[i] = 'q';
			}
		}
	}	// 打表成功
	int u = 0;		// 记 “—”有多少，来排除最后一个识别码 
	int y = 0;
	for(int i=0;i<isbn.size();i++){
		if(isbn_num[i] == 's'){
			u++;
		}
		if((isbn_num[i] == '0' || isbn_num[i] == '1' || isbn_num[i] == '2' || isbn_num[i] == '3' || isbn_num[i] == '4' || isbn_num[i] == '5' || isbn_num[i] == '6' || isbn_num[i] == '7' || isbn_num[i] == '8' || isbn_num[i] == '9') && (u != 3)){
			isbn_num2[y] = ((int)isbn_num[i]-48);
			y++;
		}
		if(isbn_num[i] == 'q'){
			m = 1;
		}
	}	// 成功把isbn里的数字存入一个数组里
	int sum = 0;	// 存isbn里的数字之和 
	for(int i=0;i<9;i++){
		sum = sum + isbn_num2[i] * (i+1);
		//cout << isbn_num2[i] << "*" << i << "+sum=" << sum << endl;
	}		// 把数字和求出来 
	int mod = sum % 11;	// 取模 
	int p = 0;
	if(m == 0){
		p = isbn[isbn.size()-1] - 48;
	}
	if(m == 1){
		p = 10;	
	}
	if(mod == p){
		cout << "Right";
	}
	else{
		if(mod == 10){
			for(int i=0;i<isbn.size()-1;i++){
				cout << isbn[i];
			}
			cout << "X";
		}
		else{
			for(int i=0;i<isbn.size()-1;i++){
				cout << isbn[i];
			}
			cout << mod;
		}
	}
	return 0;
}
