#include<stdio.h>

main(){
	int a,b; //data members : dynamic programming
	
	printf("Enter Number 1 : ");
	scanf("%d", &a);
	printf("Enter Number 2: ");
	scanf("%d", &b);
	
	printf("A : %d",a);
	printf("\nB : %d", b);
	
	printf("\nAddition : %d", a+b);
	printf("\nSub : %d", a-b);
	printf("\nMul : %d", a*b);
	printf("\nDiv : %f", (float)a/b);
}
