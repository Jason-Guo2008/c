#include<bits/stdc++.h>
using namespace std;
int a[6][6];
int tx,ty,sx,sy,fx,fy,t;
int n,m,s;
void dfs(int x,int y)//用x来表示x坐标，y来表示y坐标 
{
	if(x<1||x>n)//x坐标越界 
		return;
	if(y<1||y>m)//y坐标越界 
		return;
	if(x==fx&&y==fy)
	{
		s++;//终点站到了 
		return;
	}	
	if(a[x][y]==1||a[x][y]==2)//1代表走过了，2代表障碍 
		return;
	a[x][y]=1;
	dfs(x+1,y);//下 
	dfs(x,y+1);//右 
	dfs(x-1,y);//上 
	dfs(x,y-1);//左 
	a[x][y]=0;//清零 
}
int main()
{
	cin>>n>>m>>t;
	cin>>sx>>sy>>fx>>fy;
	for(int i=0;i<t;i++)
	{
		cin>>tx>>ty;
		a[tx][ty]=2;//标记障碍 
	}
	if(a[fx][fy]==2)//如果终点有障碍 
	{
		cout<<"0";//就没必要搜了 
		return 0;//肯定搜不到 
	}
	dfs(sx,sy);//从起点开始 
	cout<<s;
	return 0;
}
