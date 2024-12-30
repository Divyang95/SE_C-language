//Dynamic array earlier is static array
#include<stdio.h>
main(){
	int i,n;
	printf("Enter a Total Number of array elements you want : ");
	scanf("%d",&n);
	int a[n];
	
	for(i=0;i<n;i++){
		printf("\n Enter a Number :");
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<n;i++){
		printf("\n Elements are : %d",a[i]);
	}
	
}
