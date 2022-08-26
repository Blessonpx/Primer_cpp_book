#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main(){
	string s;
	getline(cin,s);
	for (int i=0;i<s.size();++i){
		if(!ispunct(s[i])){
		cout<<s[i];
		}
		
	}
	return 0;
}
