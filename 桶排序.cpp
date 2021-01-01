#include <iostream>

#include<cstring>
using namespace std;
int main(){
	int n,a[100005],b[1005];
	
	cin>>n;//数组a长度 
	memset(b,0,sizeof(b));//清了一b数组所需要空间
	 
	for(int i=1;i<=n;++i)cin>>a[i];//把样例数据放进a数组 

	for(int i=1;i<=n;++i) ++b[a[i]];//统计a数组中各个数出现的频次 

	int maxValue=0;
	for(int i=1;i<n;++i){   // 找到b数组中最大值的下标 
		if(b[i]>b[maxValue])maxValue =i;
	}
	cout<<maxValue<<endl;
	return 0;
}

