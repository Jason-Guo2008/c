#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int A[5005],B[5005],ANS[5005],len_a,len_b,len_ans;

void Read(int *a,int &len_a){
    string cur;
    cin>>cur;
    len_a=cur.length();
    for(int i=0;i<len_a;i++) a[i]=cur[i]-48;
    reverse(a,a+len_a);
}

int main(){
    //��������
    Read(A,len_a);
    Read(B,len_b);
    len_ans=len_a+len_b-1;
    //��10�Ĳ�ͬ���ݵ�ϵ�� ����ans����
    // ģ��˷������� 
    for(int i=0;i<len_a;i++){
        for(int j=0;j<len_b;j++){
            ANS[i+j]+=A[i]*B[j];
        }
    }
    //��λ
    for(int i=0;i<len_ans;i++){
        if(ANS[i]>9){
            ANS[i+1]+=ANS[i]/10;
            ANS[i]%=10;
        }
    }
    //��λ��
    while(ANS[len_ans])len_ans++;
    //����������
    for(int i=len_ans-1;i>=0;i--){
        cout<<ANS[i];
    }
}
