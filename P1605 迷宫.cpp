#include<bits/stdc++.h>
using namespace std;
int a[6][6];
int tx,ty,sx,sy,fx,fy,t;
int n,m,s;
void dfs(int x,int y)//��x����ʾx���꣬y����ʾy���� 
{
	if(x<1||x>n)//x����Խ�� 
		return;
	if(y<1||y>m)//y����Խ�� 
		return;
	if(x==fx&&y==fy)
	{
		s++;//�յ�վ���� 
		return;
	}	
	if(a[x][y]==1||a[x][y]==2)//1�����߹��ˣ�2�����ϰ� 
		return;
	a[x][y]=1;
	dfs(x+1,y);//�� 
	dfs(x,y+1);//�� 
	dfs(x-1,y);//�� 
	dfs(x,y-1);//�� 
	a[x][y]=0;//���� 
}
int main()
{
	cin>>n>>m>>t;
	cin>>sx>>sy>>fx>>fy;
	for(int i=0;i<t;i++)
	{
		cin>>tx>>ty;
		a[tx][ty]=2;//����ϰ� 
	}
	if(a[fx][fy]==2)//����յ����ϰ� 
	{
		cout<<"0";//��û��Ҫ���� 
		return 0;//�϶��Ѳ��� 
	}
	dfs(sx,sy);//����㿪ʼ 
	cout<<s;
	return 0;
}
