#include <iostream>
using namespace std;
char isbn_num[20];
int isbn_num2[20];
int main(){
	string isbn;
	cin >> isbn;
	int m = 0;
	for(int i=0;i<isbn.size();i++){
		if(isbn[i] == '-'){		// ����ֱ���������ַ����棬�������á�s�����棬��X���á�q������ 
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
	}	// ���ɹ�
	int u = 0;		// �� �������ж��٣����ų����һ��ʶ���� 
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
	}	// �ɹ���isbn������ִ���һ��������
	int sum = 0;	// ��isbn�������֮�� 
	for(int i=0;i<9;i++){
		sum = sum + isbn_num2[i] * (i+1);
		//cout << isbn_num2[i] << "*" << i << "+sum=" << sum << endl;
	}		// �����ֺ������ 
	int mod = sum % 11;	// ȡģ 
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
