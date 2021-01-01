#include <iostream>
using namespace std;
int b[4];
struct Student{
	string name;
	int score[4];
};
int main(){
	freopen("txt.in","r",stdin);
	Student Stu[4];
	for(int i=0;i<4;i++){
		cin >> Stu[i].name;
		for(int j=0;j<4;j++){
			cin >> Stu[i].score[j];
		}
	}
	int sum,sum2=0;
	for(int i=0;i<4;i++){
		cout << Stu[i].name << " ";
		for(int j=0;j<4;j++){
			cout << Stu[i].score[j] << " ";
			sum = sum + Stu[i].score[j];
			sum2 = sum2 + Stu[i].score[j];
			b[j] = b[j] + Stu[i].score[j];
		}
		cout << sum2;
		sum2 = 0;
		cout << endl;
	}
	cout << sum << endl;
	for(int i=0;i<4;i++){
		cout << b[i] << " ";
	}
	return 0;
}
