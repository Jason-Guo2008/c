#include <bits/stdc++.h>
using namespace std;
int main(){
    int number,ans=0;
    cin>>number;
    if(number>30 || number<10){
        cout<<0;
    }
    else{
        for(int i=1;i<4;i++){
            for(int j=1;j<4;j++){
                for(int k=1;k<4;k++){
                    for(int l=1;l<4;l++){
                        for(int m=1;m<4;m++){
                            for(int n=1;n<4;n++){
                                for(int o=1;o<4;o++){
                                    for(int p=1;p<4;p++){
                                        for(int q=1;q<4;q++){
                                            for(int r=1;r<4;r++){
                                                if(i+j+k+l+m+n+o+p+q+r==number){
                                                    ans++;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        
        cout<<ans<<endl;
        for(int i=1;i<4;i++){
            for(int j=1;j<4;j++){
                for(int k=1;k<4;k++){
                    for(int l=1;l<4;l++){
                        for(int m=1;m<4;m++){
                            for(int n=1;n<4;n++){
                                for(int o=1;o<4;o++){
                                    for(int p=1;p<4;p++){
                                        for(int q=1;q<4;q++){
                                            for(int r=1;r<4;r++){
                                                if(i+j+k+l+m+n+o+p+q+r==number){
                                                    cout<<i<<" "<<j<<" "<<k<<" "<<l<<" "<<m<<" "<<n<<" "<<o<<" "<<p<<" "<<q<<" "<<r<<endl;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return 0;
}
