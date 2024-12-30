#include<stdio.h>

triangle(int n){
	int i,j,k;
	
	for(i=1;i<=n;i++){
		for(j=1;j<=n-i;j++){
			printf(" ");
		}
		
		for(k=1;k<=i;k++){
			printf(" *");
		}
		for(j=1;j<=n-i;j++){
			printf("* ");
		}
		for(k=1;k<=i;k++){
			printf(" ");
		}
		printf("\n");
	}
}

main(){
	int n;
	printf("Enter a rows up which you want triangle : ");
	scanf("%d",&n);
	triangle(n);
}
