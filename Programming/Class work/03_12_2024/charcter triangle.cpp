//triangle of abc 

#include<stdio.h>

main(){
	int i,j;
	int n;
	
	for(i=1;i<=5;i++){
		n=65;
		for(j=1;j<=i;j++){
			printf("%c",n);
			n++;
		}
		printf("\n");
	}
}
