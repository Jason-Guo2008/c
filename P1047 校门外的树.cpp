#include <bits/stdc++.h>
using namespace std;
int main(){
	int l,m;	// l是马路的长度，m是要输入的区域的数目 
	cin >> l >> m;	// 输入 
	int a[l+100];	// 用一个数组来模拟街道 
	int trees_num = 0;	// 计马路上还有多少棵树	
	for(int i=0;i<=l+100;i++){
		a[i] = 1;	// 把数组里的全部元素改为1，表示树 
	}
	int u,v = 0;	// 输入范围用的 
	for(int i=0;i<m;i++){
		cin >> u >> v;
		for(int j=u;j<=v;j++){
			a[j] = 0;	// 范围里的树被砍掉 
		}
	}
	for(int i=0;i<=l;i++){
		if(a[i] == 1){
			trees_num++;	//没被砍掉的树，就计数 
		}
	}
	cout << trees_num;	// 打印 
	return 0;
}
