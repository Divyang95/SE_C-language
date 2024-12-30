//Triangle function user defined

#include<stdio.h>

Triangle(int n)
{
	int i,j,k;
	for(i=1;i<=n;i++){
		for(k=1;k<=n-i;k++){
			printf(" ");
		}
		for(j=1;j<=i;j++){
			printf(" *");
		}
		printf("\n");
		
	}
}

main(){
	int n,i,j,k;
	printf("Enter a Number of rows triangle you want :");
	scanf("%d",&n);
	
	Triangle(n);
}
