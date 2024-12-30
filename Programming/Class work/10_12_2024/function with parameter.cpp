//Functions with parameters and without returns
//user inputs are parameters. parameters added to function at the time of creation of function
//when we call function at that time parameters becomes arguments.

//function without paramter and without return type is completed earlier

//function with parameter and with paramter

#include<stdio.h>

fun1(int n1, int n2) //parameters at the time of creation
{
	if(n1>n2){
		printf("Number 1 is greater");
	}	
	else {
		printf("Number 2 is greater");
	}
}

main(){
	fun1(10,20);
}
