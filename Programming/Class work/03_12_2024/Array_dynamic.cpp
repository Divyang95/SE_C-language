//Dynamic array earlier is static array
#include<stdio.h>
main(){
	int i,a[5];
	
	for(i=0;i<5;i++){
		printf("\n Enter a Number :");
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<5;i++){
		printf("\n Elements are : %d",a[i]);
	}
	
}
