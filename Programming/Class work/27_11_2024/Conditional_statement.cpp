//Conditional Statements
//There are three types of conditional statements
//(1)Normal if/else  (2) Ladder if/else (ladder means we use (else if) for third condition) (3)nested if/else .

#include<stdio.h>

main(){
	int n;
	
	printf("Enter Your Age : ");
	scanf("%d", &n);
	
	if(n>100){
		printf("Invalid age!! %d",n);
	}
	else if(n>=18){
		printf("You are eligible for vote!! your age is %d", n);
	}
	else{
		printf("You are not eligible for voting because your age is %d",n);
	}
}
