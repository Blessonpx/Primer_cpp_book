#include <iostream>
#include <limits>


using namespace std;
template<typename T>
void typeMaxMin(){
	cout<<"Min:"<<numeric_limits<T>::min()<<endl;
	cout<<"Max:"<<numeric_limits<T>::max()<<endl;
	cout<<endl;	
}

int main(){
	cout<<"Integer Limits"<<endl;
	typeMaxMin<int>();
	cout<<endl;
        cout<<"Short Limits"<<endl;
        typeMaxMin<short>();
        cout<<endl;
        cout<<"float Limits"<<endl;
        typeMaxMin<float>();
        cout<<endl;
        cout<<"Double Limits"<<endl;
        typeMaxMin<double>();
        cout<<endl;
        cout<<"Long Double Limits"<<endl;
        typeMaxMin<long double>();
        cout<<endl;
        cout<<"Unsigned Short Limits"<<endl;
        typeMaxMin<unsigned short>();
        cout<<endl;
        cout<<"Unsigned Long Limits"<<endl;
        typeMaxMin<unsigned long>();
        cout<<endl;
	return 0;
}
