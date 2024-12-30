//lastnumber up to which you want to print
#include<stdio.h>
main(){
	int i,n;
	printf("Enter a Number up to which you want numbers : ");
	scanf("%d",&n);
	
	i=1;
	while(i<=n){
		printf("%d \n",i);
		i++;
	}
}
