#include<stdio.h>
#include<string.h>
main(){
	char a[10],b[10];
	printf("Enter String 1 :");
	gets(a);
	
	printf("Enter string 2 : ");
	gets(b);
	
	int result = strcmp(a,b);
	if(result==0){
		printf("Both string1 and string2 are same ");
	}
	else if(result<0){
		printf("First string is smaller");
	}
	else{
		printf("First string is bigger");
	}
	
}
