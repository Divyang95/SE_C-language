//By asking user last number
#include<stdio.h>

main(){
	int i,n;
	
	printf("Enter last number : ");
	scanf("%d",&n);
	
	i=1;
	while(i<=n){
		printf("%d\n",i);
		i=i+1;
	}
	
}
