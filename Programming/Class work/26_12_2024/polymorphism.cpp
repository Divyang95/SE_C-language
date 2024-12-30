//Polymorphism
//polymorphism introduced to tackle multiple methods with same name in one class
//poly : many 
//morphism :forms 

//There are two type of Polymorphism 
//(1) Method Overloading 
//(2)Method Overriding 

//1)Method Overloading is : In which to tackle multiple methods with same name 

//Method Overloading 
#include<iostream>
using namespace std;

class A{
	public:
		myfun(int a){
				cout<<"Hello"<<endl;
		}
		
		myfun(int a, int b){
			cout<<"Hello this function with two parameter"<<endl;
		}
		
		myfun(string a){
			cout<<"Hello this is string"<<endl;
		}
		
		myfun(){
			cout<<"Hello I am blank function without parameter"<<endl;
		}
}; 

main(){
	A obj;
	obj.myfun(10);
	obj.myfun(10,20);
	obj.myfun("Hello");
	obj.myfun();
}
