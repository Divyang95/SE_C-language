//File read method
#include<stdio.h>
#include<string.h>

main(){
	FILE* fptr;
	fptr = fopen("test1.txt","r");
	int i;
//	char a[100];
//	fgets(a,100,fptr);
char ch;

	
	while(1){
		ch = fgetc(fptr);
		
		if(ch == EOF){
			break;
		}
		printf("%c",ch);
		
	}
	
	fclose(fptr);
	
//	for(i=0;a[i]!='\0';i++){
//		printf("%s",a);	
//	}	
	
}
