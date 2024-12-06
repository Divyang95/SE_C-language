//Summation of number like for 5 : 5+4+3+2+1
//for loop start, stop, increament here it should stop to 1; 


#include<stdio.h>

main(){
	
	int n,i=1,sum=0;
	
	printf("Enter a number up to which you want sum : ");
	scanf("%d", &n);
	
	while(i<=n){
		sum = sum + i;
		//0 = 0 + 1
		//1 = 1 + 2 =3
		//sum = 3 +3 =6 
		//sum = 6 + 4 = 10
		//sum = 10 + 5 = 15
		i = i + 1;	
	}
	
	printf("Sum of all numbers behind %d is %d", n, sum);
}
