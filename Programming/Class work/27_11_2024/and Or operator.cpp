//And && Operator || Or Operator 

#include<stdio.h>
main(){
	int n1,n2,n3;
	
	printf("Enter number 1:");
	scanf("%d",&n1);
	printf("Enter Number 2 :");
	scanf("%d", &n2);
	printf("Enter Number 3 : ");
	scanf("%d", &n3);
	
	if(n1>n2 && n1>n3){
		printf("%d is greatest",n1);
	}
	else if(n2>n1 && n2>n3){
		printf("%d is greatest",n2);
	}
	else{
		printf("%d is greatest",n3);
	}
}
