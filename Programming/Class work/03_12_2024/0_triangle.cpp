//right angle pattern with 0 and in last 1 to 10.

#include<stdio.h>
main(){
	int i,j;
	for(i=1;i<=10;i++){
		for(j=1;j>=10-j;j++){
			printf("%d",0);
		}
		printf("\n");
	}
}


