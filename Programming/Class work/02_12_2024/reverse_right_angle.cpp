//reverse right angle 
#include<stdio.h>

main(){
	int i,j,k,n;
	
	printf("How many lines right angle you want : ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		for(j=n-i;j>=1;j--){
			printf("*");
		}
		printf("\n");
	}
}
