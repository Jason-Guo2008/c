#include <iostream>

#include<cstring>
using namespace std;
int main(){
	int n,a[100005],b[1005];
	
	cin>>n;//����a���� 
	memset(b,0,sizeof(b));//����һb��������Ҫ�ռ�
	 
	for(int i=1;i<=n;++i)cin>>a[i];//���������ݷŽ�a���� 

	for(int i=1;i<=n;++i) ++b[a[i]];//ͳ��a�����и��������ֵ�Ƶ�� 

	int maxValue=0;
	for(int i=1;i<n;++i){   // �ҵ�b���������ֵ���±� 
		if(b[i]>b[maxValue])maxValue =i;
	}
	cout<<maxValue<<endl;
	return 0;
}

