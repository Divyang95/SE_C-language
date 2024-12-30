//copy string another method 
#include<stdio.h>
#include<string.h>
main(){
	int i;
	char a[10],b[10];
	printf("Enter a string : ");
	gets(a);
	
	for(i=0;a[i]!='\0';i++){
		b[i] = a[i];
	}
	a[i]='\0';
	printf("Copy string is : %s",b);
}
