//Reverse Number from 1 to 10 

#include<stdio.h>

main(){
	int i; //initialize
	
	printf("Enter last number for reverse :");
	scanf("%d",&i);
	
	while(i>=1){
		printf("%d\n",i);
		i=i-1;
	}
}
