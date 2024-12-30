//multiple Inheritance :Multiple parent and single child 

// A    B
//	 |
//   C

//Heirarchy 
//    A
//    |
//B      C

#include<iostream>
using namespace std;

class A{
	public:
		myfun(){
			cout<<"Hello"<<endl;
		}
}; 

class B{
	public:
		myfun1(){
			cout<<"This is class B"<<endl;
		}
};

class C: public A,public B{
public:
	myfun2(){
		cout<<"This is child class of A and B"<<endl;
	}
};

main(){
	C obj;
	obj.myfun();
	obj.myfun1();
	obj.myfun2();
}
