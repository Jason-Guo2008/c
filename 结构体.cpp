#include <iostream>
using namespace std;
struct Student{
	string name;
	int score;
};
int main(){
	Student stu;
	stu.name="��chou������ʦ";
	stu.score=0;
	cout << stu.name << "����" << stu.score << "��";
	return 0;
}
