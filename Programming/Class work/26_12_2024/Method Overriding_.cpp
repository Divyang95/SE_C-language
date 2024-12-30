//Method overriding :
//method overriding in which
//same methods in multiple classes then use method overriding 

#include<iostream>
using namespace std;

class A{
	public:
		myfun(){
			cout<<"Hello"<<endl;
		}
};

class B:public A{
	public:
		myfun(){
			A::myfun(); //Scope Operator
			cout<<"Welcome"<<endl;
		}
};

class C:public B{
	public:
		myfun(){
			B::myfun(); //Scope Operator 
			cout<<"Welcome1"<<endl;
		}
};

main(){
	C obj;
	obj.myfun();
}
