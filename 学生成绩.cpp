#include <iostream>
using namespace std;
struct Student{
	string name;
	int score[4];
};
int main(){
	Student Stu;
	cin >> Stu.name;
	for(int i=0;i<4;i++){
		cin >> Stu.score[i];
	}
	cout << Stu.name << endl;
	int sum=0;
	for(int i=0;i<4;i++){
		cout << Stu.score[i] << " ";
		sum = sum + Stu.score[i];
	}
	cout << sum;
	return 0;
}
