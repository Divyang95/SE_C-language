//5 inputs from user we want to ask using while loop

#include<stdio.h>

main(){
	
	int i=1,n,nq=5,od=0,ev=0,odsum=0,evsum=0;
	
	while(i<=nq){
		printf("\nEnter a Number %d : ",i);
		scanf("%d",&n);
		
		if(n%2==0){
			printf("%d is even",n);
			ev++;
			evsum+=n;
			
			
		}
		else{
			printf("%d is odd",n);
			od++;
			odsum+=n;
		}
		
		i++;
	}
	
	printf("total odd count is %d and evencount is %d",od,ev);
	printf("sum of even count is %d and sum od odd is %d",evsum,odsum);
}

