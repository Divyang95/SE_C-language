//Prime Numbers 
#include<stdio.h>
main(){
	int i,n,prime=0;
	printf("Enter a Number : ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		if(n%i == 0){
			prime++;
		}
	}
	if(prime == 2){
		printf("Enterd Number %d is prime Number",n);
	}
	else{
		printf("Entered Number %d is not prime",n);
	}
}
