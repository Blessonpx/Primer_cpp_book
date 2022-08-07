#include <iostream>

int main(){
	int val=1, sum=0;
	while (val<=10){
		sum+=val;
		val+=1;
	}
	std::cout<<"Sum="<<sum<<std::endl;
	return 0;
}
