//OOPS
//Object Oriented programming system
//Concepts of oops 
//(1)class & objects 
//(2)inheritance
//(3)polymorphism
//(4)encapsulation
//(5)abstraction

//(1) class : class is collection data member and member functions

//(2) object : 
//object is instance of class through the object we can access all the properties of class 

//access specifiers
//(1) public
//2)private
//3)protected

#include<iostream>
using namespace std;
class Myclass{
	public:
		int a,b;
		myfun(){
			cout<<"Enter A :";
			cin>>a;
			
			cout<<"Enter B :";
			cin>>b;
			
			cout<<"Addition is : "<<a+b<<endl;
		}
		
		myfun1(){
			cout<<"Enter A : ";
			cin>>a;
			
			cout<<"Enter B : ";
			cin>>b;
			
			cout<<"Mul is :"<<a*b<<endl;
		}
		
		myfun2(){
			cout<<"Enter A :";
			cin>>a;
			
			cout<<"Enter B : ";
			cin>>b;
			
			cout<<"Substraction is : "<<a-b<<endl;
		}
};

main(){
	Myclass obj; //object creation
	obj.myfun();
	obj.myfun1();
	obj.myfun2();
} 



