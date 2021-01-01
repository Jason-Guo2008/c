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
    //读入数字
    Read(A,len_a);
    Read(B,len_b);
    len_ans=len_a+len_b-1;
    //求10的不同次幂的系数 存入ans数组
    // 模拟乘法分配律 
    for(int i=0;i<len_a;i++){
        for(int j=0;j<len_b;j++){
            ANS[i+j]+=A[i]*B[j];
        }
    }
    //进位
    for(int i=0;i<len_ans;i++){
        if(ANS[i]>9){
            ANS[i+1]+=ANS[i]/10;
            ANS[i]%=10;
        }
    }
    //算位数
    while(ANS[len_ans])len_ans++;
    //输出这个数字
    for(int i=len_ans-1;i>=0;i--){
        cout<<ANS[i];
    }
}
