//find greatest from 2 Numbers take two input from user

#include<stdio.h>

main(){
	
	float n1,n2;
	printf("Enter a Number 1 : ");
	scanf("%f",&n1);
	printf("Enter a Number 2 : ");
	scanf("%f", &n2);
	
	if(n1==n2){
		printf("Both number is equal number1 is %f and Number 2 is %f", n1,n2); 
	}
	
	else if(n1>n2){
		printf("Number 1: %0.2f is greaterthan Number 2 : %0.2f", n1,n2);
	}
	
	else{
		printf("number 1: %0.2f is lessthan the Number 2 : %0.2f", n1,n2);
	}
}
