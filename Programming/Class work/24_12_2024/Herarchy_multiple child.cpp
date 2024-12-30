//Heirarchy in class 

#include<iostream>
using namespace std;

class A{
	public:
		myfun1(){
			cout<<"Hello i am parent A"<<endl;
	}
};

class B:public A{
	public:
		myfun2(){
			cout<<"Hello I am Class B"<<endl;
		}
		
};

class C:public A{
	public:
		myfun3(){
			cout<<"Hell I am class C"<<endl;
		}
};

main(){
	C obj1;
	B obj;
	obj1.myfun1();
	obj1.myfun3(); 
	
	obj.myfun2();
	obj.myfun1();
}
