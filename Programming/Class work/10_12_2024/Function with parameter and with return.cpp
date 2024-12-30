//function with parameter and with return with factorial
//returnn happens where operation performing
#include<stdio.h>

factorial(int n){
	int fact=1,i;
	for(i=1;i<=n;i++){
		fact*=i;
	}
	
	return fact;
	
}

main(){
	int n;
	printf("Enter a number up to which factorial you want :");
	scanf("%d",&n);
	int result = factorial(n);
	printf("%d",result);
}

