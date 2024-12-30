//String Starting 
//String : Collection of Characters 
//built in methods : 1)length
#include<stdio.h>
#include<string.h>
main(){
	char a[5];
	
	printf("Enter a String :");
	gets(a);
	
	printf("%s",a);
	
	printf("\n length of string is : %d", strlen(a));
}
