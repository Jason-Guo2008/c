#include <iostream>
#include <string>
using namespace std;
int main(){
	string s;
	getline(cin,s);
	int numOfDights = 0;
	int numOfLetters = 0;
	// "Peking University is set up at 1898."
	for(int i=0;i<s.length();++i){
		if(s.at(i) >= '0' && s.at(i) <= '9'){	// ×Ö·û´®±È½Ï 
			numOfDights++;	 
		}
		if((s.at(i) >= 'A' && s.at(i) <= 'Z') || (s.at(i) >= 'a' && s.at(i) <= 'z')){
			numOfLetters++; 
		}
	}
	cout << numOfDights << " " << numOfLetters;
	return 0;
}
