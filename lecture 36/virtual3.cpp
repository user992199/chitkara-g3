#include<iostream>
using namespace std;
class parentclass{
public:
	virtual void print() = 0;
	static void hello(){
		cout<<"Hello World\n";
	}
};
class childclass: public parentclass{
public:
	void print(){
		cout<<"Child\n";
	}
};

void func(parentclass * obj){
	(*obj).print();
}

int main(){
	parentclass::hello();
	parentclass * parentobject = new childclass();
	childclass * childobject = new childclass();
	cout<<"_______Compile Time Polymorphism_______\n";
	parentobject -> print();
	childobject -> print();
	cout<<"_________Run Time Polymorphism_________\n";
	func(parentobject);
	func(childobject);
	return 0;
}