#include <iostream>

using namespace  std;
int main(){
	int num,x;	
	std::cin>>num>>x;
	int temp=1;
	for (int i=0;i!=x;++i){
		temp=num*temp;
	}
	std::cout<<temp;
	return 0;
}
