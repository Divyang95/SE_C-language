//2D array 
#include<stdio.h>
main(){
	int a[2][3] = {{6,7,8},{8,9,0}};
	
	int i,j;
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			printf("%d\n",a[i][j]);
		}
	}
}
