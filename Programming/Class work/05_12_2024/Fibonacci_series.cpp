//fibonacci series : 0 1 1 2 3 5 8 13

#include<stdio.h>
main(){
	int i,n1=0,n2=1,n3,n;
	
	printf("Enter terms : ");
	scanf("%d",&n);
	
	printf("%d\n",n1);
	printf("%d\n",n2);
	
	for(i=3;i<=n;i++){
		n3= n1+n2;
		printf("%d\n",n3);
		n1=n2;
		n2=n3;
	}
}
