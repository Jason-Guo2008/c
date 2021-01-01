#include <bits/stdc++.h>
using namespace std;
int main(){
	string s;
	getline(cin,s);
	char a_2[5];
	char a_3[5];
	char a_4[5];
	char a_5[5];
	char a_6[5];
	char a_7[5];
	char a_8[5];
	char a_9[5];
	char a_0[5];
	int y_2 = 0;
	int y_3 = 0;
	int y_4 = 0;
	int y_5 = 0;
	int y_6 = 0;
	int y_7 = 0;
	int y_8 = 0;
	int y_9 = 0;
	for(int i=97;i<=122;i++){
		if(i == 97 || i == 98 || i == 99){
			a_2[y_2] = (char)i;
			y_2++;
		}
		if(i == 100 || i == 101 || i == 102){
			a_3[y_3] = (char)i;
			y_3++;
		}
		if(i == 103 || i == 104 || i == 105){
			a_4[y_4] = (char)i;
			y_4++;
		}
		if(i == 106 || i == 107 || i == 108){
			a_5[y_5] = (char)i;
			y_5++;
		}
		if(i == 109 || i == 110 || i == 111){
			a_6[y_6] = (char)i;
			y_6++;
		}
		if(i == 112 || i == 113 || i == 114 || i == 115){
			a_7[y_7] = (char)i;
			y_7++;
		}
		if(i == 116 || i == 117 || i == 118){
			a_8[y_8] = (char)i;
			y_8++;
		}
		if(i == 119 || i == 120 || i == 121 || i == 122){
			a_9[y_9] = (char)i;
			y_9++;
		}
	}
	a_0[0] = ' ';
	int sum = 0;
	int n = 1;
	for(int i=0;i<s.size();i++){
		if(s[i] != ' '){
			for(int j=0;j<3;j++){
				if(s[i] == a_2[j]){
					sum = sum + n;
					break;
				}
				n++;
			}
			n = 1;
			for(int u=0;u<3;u++){
				if(s[i] == a_3[u]){
					sum = sum + n;
					break;
				}
				n++;
			}
			n = 1;
			for(int q=0;q<3;q++){
				if(s[i] == a_4[q]){
					sum = sum + n;
					break;
				}
				n++;
			}
			n = 1;
			for(int w=0;w<3;w++){
				if(s[i] == a_5[w]){
					sum = sum + n;
					break;
				}
				n++;
			}
			n = 1;
			for(int b=0;b<3;b++){
				if(s[i] == a_6[b]){
					sum = sum + n;
					break;
				}
				n++;
			}
			n = 1;
			for(int u=0;u<4;u++){
				if(s[i] == a_7[u]){
					sum = sum + n;
					break;
				}
				n++;
			}
			n = 1;
			for(int m=0;m<3;m++){
				if(s[i] == a_8[m]){
					sum = sum + n;
					break;
				}
				n++;
			}
			n = 1;
			for(int h=0;h<4;h++){
				if(s[i] == a_9[h]){
					sum = sum + n;
					break;
				}
				n++;
			}
			n = 1;
		}
		else{
			sum++;
		}
	}
	cout << sum;
	return 0;
}
