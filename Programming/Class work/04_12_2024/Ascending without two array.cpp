//array Ascending without using two for loop
#include<stdio.h>
main(){
	int i,a[5],temp,j;
	
	for(i=0;i<5;i++){
		printf("Enter a Element %d : ",i+1);
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<=5;i++){
		if(a[i]>a[i+1]){
			temp = a[i];
			a[i]=a[i+1];
			a[i+1]=temp;
			}
			
		
		printf("\nelements are%d ",a[i]);
		
		
	}
}
