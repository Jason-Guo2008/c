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
	int differ = 0;		// 记录距离 
	int maxdiffer=0,mindiffer=99999;		// 记录最大的跨度值和最小的跨度值 
	int maxL,maxR = 0;		// 记录最大的跨度值的那两个数 
	int minL,minR = 0;		// 记录最小的跨度值的那两个数 
	for(int i=l;i<=r;i++){
		if(a[i] == 0){		// 找到了一个质数 
			for(int j=i+1;j<=r;j++){
				if(a[j] == 0){		// 又找到了另一个质数 
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
		cout << "无素数对";
	}
	else{
		cout << minL << "," << minR << "最近，" << maxL << "," << maxR << "最远";
	}
	return 0;
}
