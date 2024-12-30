//union in case of union we have to declare number of variables as number of variable required
//so s1 s2 s3 depends on use of varibles 

#include<stdio.h>
#include<string.h>

union Myunion{
	int a[8];
	int i;
	int j;
	int temp;
}u1,u2,u3,u4;

main(){
	for(u2.i=0;u2.i<8;u2.i++){
		printf("Enter a Number : ");
		scanf("%d",&u1.a[u2.i]);	
	}
	
	for(u2.i=0;u2.i<8;u2.i++){
		for(u3.j=u2.i+1;u3.j<8;u3.j++){
			if(u1.a[u2.i]<u1.a[u3.j]){
				u4.temp = u1.a[u3.j];
				u1.a[u3.j] = u1.a[u2.i];
				u1.a[u2.i] = u4.temp;
			}
		}
		
		printf("\n%d",u1.a[u2.i]);
	}
}



