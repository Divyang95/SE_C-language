//left angle triangle 
#include<stdio.h>
main(){
	
	int i,j,k,n;
	
	printf("Enter a number of rows you needed : ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		for(k=1;k<=n-i;k++){
			printf(" ");
		}
		for(j=1;j<=i;j++){
			printf("*");
		}
		printf("\n");
	}
}
