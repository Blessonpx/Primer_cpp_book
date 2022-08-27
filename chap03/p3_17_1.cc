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
	vector<int>::iterator iter;
	vector<int>::iterator iter_end;
	vector<int>::iterator temp;
	iter=ivec.begin();
	iter_end=ivec.end();
	++iter;
	--iter_end;
	if (ivec.size()%2==0){
		for (;iter!=ivec.end();++iter ){
			temp=iter;
			--temp;
			cout<<*iter+*temp;
		}
	} else {
                for (;iter!=iter_end;++iter ){
                        temp=iter;
                        --temp;
                        cout<<*iter+*temp;
                }
                cout<<*iter_end ;
	}
	return 0;
}
