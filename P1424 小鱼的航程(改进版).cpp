#include <iostream>
using namespace std;
int main()
{
    unsigned long long n,ans=0;
    int x;
    cin >> x >> n; //�������ںͳ�������
    for(int i=0;i<n;i++)
    {
        if((x!=6)&&(x!=7)) //ֻҪ���ڲ�����6��7
            ans += 250; //�ܳ�������250
        if(x==7){ //��x����7��ʱ��
        	x=1; // x��λΪ1
    	}
        else{ //��������£�x������7��ʱ��
            x++; //x�Լ�1
    	}
    }
    cout << ans; //�����·��
    return 0;
}
