#include <bits/stdc++.h>
using namespace std;
int main(){
	int l,m;	// l����·�ĳ��ȣ�m��Ҫ������������Ŀ 
	cin >> l >> m;	// ���� 
	int a[l+100];	// ��һ��������ģ��ֵ� 
	int trees_num = 0;	// ����·�ϻ��ж��ٿ���	
	for(int i=0;i<=l+100;i++){
		a[i] = 1;	// ���������ȫ��Ԫ�ظ�Ϊ1����ʾ�� 
	}
	int u,v = 0;	// ���뷶Χ�õ� 
	for(int i=0;i<m;i++){
		cin >> u >> v;
		for(int j=u;j<=v;j++){
			a[j] = 0;	// ��Χ����������� 
		}
	}
	for(int i=0;i<=l;i++){
		if(a[i] == 1){
			trees_num++;	//û�������������ͼ��� 
		}
	}
	cout << trees_num;	// ��ӡ 
	return 0;
}
