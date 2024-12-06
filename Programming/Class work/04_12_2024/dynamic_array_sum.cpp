//dynamic array for summation.
#include<stdio.h>
main(){
	int i,a[5],sum=0;
	
	for(i=0;i<5;i++){
		printf("Enter a Element %d : ",i+1);
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<5;i++){
		sum = sum + a[i];
	}
	printf("Sum of array a[%d] is %d",i,sum);
}
