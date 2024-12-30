//String 
#include<stdio.h>

main(){
	int i,j;
	char a[10],b[10];
	
	printf("Enter a String 1:");
	gets(a);
	printf("Enter a String 2 :");
	gets(b);
	
	for(i=0;a[i]!='\0';i++);
	
	for(j=0;b[j]!='\0';j++){
		a[i]=b[j];
		i++;
	}
//	a[i]='\0';
	printf("Merge the string is : %s",a);
	
}

