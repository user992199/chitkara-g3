#include<iostream>
using namespace std;

template <typename type> type add(type a, type b){
	return a+b;
}

int main(){
	cout<<add<int>(5, 10)<<endl;
	cout<<add<double>(5.7, 10.1)<<endl;
	cout<<add<char>('a', 2)<<endl;
	return 0;
}