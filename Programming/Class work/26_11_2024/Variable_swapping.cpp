#include<stdio.h>

//variable swapping there are two ways of swapping 1.by taking 3rd temp variable 2.without taking 3rd variable by only a and b using arithmatic operation
main(){
	int a,b,temp;
	
	printf("Enter a first number A : ");
	scanf("%d",&a);
	
	printf("Enter a Second Number B : ");
	scanf("%d", &b);
	
	//variable swapping using 3rd variable
	temp = a;
	a = b;
	b = temp;
	
	printf("After 3rd variable swapping value of A : %d",a);
	printf("\nAftter 3rd variable swapping value of A : %d and value of B : %d", a,b);
	
	//variable swapping without 3rd  swapping
	
	a = a+b;
	b = a-b;
	a = a-b;
	
	printf("\nAfter swapping without 3rd variable A: %d and value of B :%d ", a,b);
	
}
