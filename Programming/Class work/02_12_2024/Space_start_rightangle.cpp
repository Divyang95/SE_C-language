//Star pattern triangle earlier was right angle

#include<stdio.h>
main(){
	
	int i,j,k,n;
	
	printf("Enter number of raw lines you needed for triangle: ");
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
