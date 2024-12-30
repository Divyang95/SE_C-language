//Inheritance in class
//using one object we can access properties means functions and data memebers of its parent class also

//Inheritance: when one class derived properties into another class is called inheritance

//total there are 5 types in inheritance
//1.Single level
//2.Multi level
//3.Multiple
//4.Heirarchy
//5.hybrid

//Single level inheritance : 
//	 A (PARENT,BASE,ROOT)
//   |
//   B (CHILD,SUB-CLASS,DERIVED)
#include<iostream>
using namespace std;

class A{
	public:
		fun1(){
			cout<<"This is Parent Class"<<endl;
		}
};

class B:public A{
	public:
		fun2(){
			cout<<"This is a Child Class"<<endl;
		}
};

main(){
	B obj;
	obj.fun1();
	obj.fun2();
}
