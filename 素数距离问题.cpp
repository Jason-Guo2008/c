#include <iostream>
using namespace std;
int a[8000001] = {0};
void printLine(){
	for(int i=2;i*i<=8000001;i++){
		if(a[i] == 0){
			for(int j=2;j*i<=8000001;j++){
				a[i*j] = 1;
			}	
		}
	}
	return ;
}
int main(){
	a[0] = 1;
	a[1] = 1;
	int l,r = 0;
	cin >> l >> r;
	printLine();
	int differ = 0;		// ��¼���� 
	int maxdiffer=0,mindiffer=99999;		// ��¼���Ŀ��ֵ����С�Ŀ��ֵ 
	int maxL,maxR = 0;		// ��¼���Ŀ��ֵ���������� 
	int minL,minR = 0;		// ��¼��С�Ŀ��ֵ���������� 
	for(int i=l;i<=r;i++){
		if(a[i] == 0){		// �ҵ���һ������ 
			for(int j=i+1;j<=r;j++){
				if(a[j] == 0){		// ���ҵ�����һ������ 
					differ = j - i;
				}
				if(differ != 0 && differ > maxdiffer){
					maxdiffer = differ;
					maxL = i;
					maxR = j;
				}
				if(differ != 0 && differ < mindiffer){
					mindiffer = differ;
					minL = i;
					minR = j;
				}
				i = j - 1;
			}
		}
	}
	if(maxdiffer == 0){
		cout << "��������";
	}
	else{
		cout << minL << "," << minR << "�����" << maxL << "," << maxR << "��Զ";
	}
	return 0;
}
