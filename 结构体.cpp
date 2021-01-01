#include <iostream>
using namespace std;
struct Student{
	string name;
	int score;
};
int main(){
	Student stu;
	stu.name="很chou的徐老师";
	stu.score=0;
	cout << stu.name << "考了" << stu.score << "分";
	return 0;
}
