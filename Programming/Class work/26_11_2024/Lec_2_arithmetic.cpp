#include<stdio.h>
main(){
	int a=12,b=5; //data members
	
	printf("A : %d", a);
	printf("\nB : %d", b);
	
	printf("\nAddition : %d", a+b);
	printf("\nSub : %d", a-b);
	printf("\nMul : %d", a*b);
	printf("\nDiv : %.2f", (float)a/b); //typecasting input a and b is in integer wheras we want answer in float so we need to give type cast 
	//if a and b were in float then at the time getting float answer no need to declare float type case for all otherthen float we need to do typecast
	
}
