#include <iostream>
using namespace std;
int main(){
	bool a[100];
	int t=41,k=0;
	for(int i=1;i<=41;i++){
		a[i] = 0;
	}
	while(t > 0){
		for(int i=1;i<=41;i++){
			if(a[i] == 0){
				k++;
				if(k == 3){
					k = 0;
					a[i] = 1;
					cout << "µÚ" << i << "ºÅ³öÈ¦ÁË" << endl;
					t--;
					if(t == 0){
						break;
					}
				}
			}
		}
	}
	return 0;
}
