//2D Array Elements from user and then print it like a table 

#include<stdio.h>
main(){
	int a[2][3],i,j;
	
	//Taking Input from the user
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			printf("Enter a %d %d elements : ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
	//Showing to the user
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	
	
}
