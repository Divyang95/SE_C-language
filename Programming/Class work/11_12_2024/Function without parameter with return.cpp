//Function without parameter with return type
#include<stdio.h>

fun1(){
	int i,sum=0,n;
	printf("Enter a Number for sum : ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		sum+=i;
		
	}
	return sum;
}

main(){
//	int result = fun1(); storing return in new variable and then print it or direct print it
//	printf("%d",result);
	printf("%d",fun1());
}
