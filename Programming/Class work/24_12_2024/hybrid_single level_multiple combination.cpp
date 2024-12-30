//hybrid inheritance
//it is combination of single level inheritance and multiple inheritance 
//multiple inheritance means : multiple parent and single child 
//heirarchy inheritance means : single parent and multiple child 
//as we know that whatever childs that many are objects 

// A
// |
// B            C
//       |
//       D  


#include<iostream>
using namespace std;

class A {
	public:
		myfun(){
			cout<<"This is Class A"<<endl;
		}
};

class B:public A{
	public:
		myfun1(){
			cout<<"This is Class B"<<endl;
		}
};

class C{
	public:
		myfun2(){
			cout<<"This is class C"<<endl;
		}
};

class D:public B,public C{
	public:
		myfun3(){
			cout<<"This is Class D"<<endl;
		}
};

main(){
	D obj;
	obj.myfun1();
	obj.myfun();
	obj.myfun2();
	obj.myfun3();
}
