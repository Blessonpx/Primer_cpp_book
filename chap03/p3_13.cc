#include<iostream>
#include<vector>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;
int main(){
	vector<int> ivec;
	int number;
	while(cin>>number){
		ivec.push_back(number);
	}
	if (ivec.size()%2==0){
		for (vector<int>::size_type ix=1;ix!=ivec.size();++ix ){
			cout<<ivec[ix]+ivec[ix-1];
		}
	}else {
		for (vector<int>::size_type ix=1;ix!=ivec.size()-1;++ix ){
			cout<<ivec[ix]+ivec[ix-1];
		}
		cout<<ivec[ivec.size()-1];
	}
	return 0;
}
