#include<stdio.h>
#include<string.h>
main()
{
	char a[10];
	int i;
	int length=0;
	printf("Enter a String :");
	gets(a);
	
	for(i=0;a[i]!='\0';i++){
		length++;
	}
	
	printf("\n length of string is : %d", length);
}
