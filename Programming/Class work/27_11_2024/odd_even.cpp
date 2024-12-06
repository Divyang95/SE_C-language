//Number is odd or even

#include<stdio.h>

main(){
	int n;
	printf("Enter a Number : ");
	scanf("%d", &n);
	
	if(n == 0){
		printf("Number is Zero %d", n);
	}
	
	else if(n%2 == 0){
		printf("Number is even %d", n);
	}
	
	else {
		printf("Number is odd %d", n);
	}
}
