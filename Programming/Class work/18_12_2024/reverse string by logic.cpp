//reverse string logically
#include<stdio.h>
#include<string.h>
main(){
	char a[10];
	int temp;
	printf("Enter a string : ");
	gets(a);
	int i;
	
//	printf("Reverse string is : %s",strrev(a));
	int len = strlen(a);
	
	for(i=0;i<=len/2;i++){
		temp = a[i];
		a[i] = a[len-i-1];
		a[len-i-1] = temp;
	}
	printf("Reverse string is : %s ",a);
}

