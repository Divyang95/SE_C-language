//Positive and Negative number 

#include<stdio.h>

main(){
	
	int n;
	printf("Enter a Number : ");
	scanf("%d",&n);
	
	if(n==0){
		printf("Number Entered is Zero %d", n);
	}
	
	else if(n>0){
		printf("number is Positive %d", n);
	}
	
	else {
		printf("Number is Negative %d", n);
	}
}
