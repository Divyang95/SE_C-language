//greatest Number between 3 numbers nested if/else

#include<stdio.h>

main(){
	int n1,n2,n3;
	printf("Enter three different numbers for getting maximum :\n");
	scanf("%d %d %d",&n1,&n2,&n3);
	
	if(n1>n2){
		if(n1>n3){
			printf("%d n1 is greatest out of three!!",n1);
		}
		else{
			printf("%d n3 is greatest out of three!!",n3);
		}
	}
	
	else {
		if(n2>n3){
			printf("%d n2 is greatest out of three!!",n2);
		}
		else{
			printf("%d n3 is greatest out of three!!",n3);
		}
	}
}
