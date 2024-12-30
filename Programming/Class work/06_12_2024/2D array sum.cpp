//Sum of Two Array 

#include<stdio.h>
main(){
	int i,j,a[2][3],b[2][3];
	
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			printf("Enter a Element %d %d for Array A : ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			printf("Enter a Element %d %d for array B : ",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			printf("%d\t",a[i][j]+b[i][j]);
		}
		printf("\n");
	}
	
	
}
