//Ascending of array 

#include<stdio.h>
main(){
	int i,a[5],temp,j;
	
	for(i=0;i<5;i++){
		printf("Enter a Element %d : ",i+1);
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<5;i++){
		for(j=i+1;j<5;j++){
			if(a[i]>a[j]){
				temp = a[j];
				a[j]=a[i];
				a[i]=temp;
			}
			
		}
		printf("\nelements are%d ",a[i]);
		
		
	}
}
