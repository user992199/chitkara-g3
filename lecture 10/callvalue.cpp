#include<iostream>
using namespace std;

int sum(int a, int b){
	a = a+b;
	cout<<a<<" "<<b<<endl;
	return a;
}

void update(int &c, int d){
	c += c;
	d += c;
}

int main(){
	int a = 5, b = 10;
	int sum1 = sum(a,b);
	cout<<a<<" "<<b<<" "<<sum1<<endl;
	// int &c = a;
	// cout<<c<<endl;
	// c += c;
	// cout<<c<<" "<<a<<endl;
	int &c = a;
	int &d = c;
	update(d, d);
	cout<<a<<" "<<b<<" "<<endl; // sum1<<endl;
	return 0;
}