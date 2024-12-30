//Append method
#include<stdio.h>
#include<string.h>

main(){
	FILE* fptr;
	
	fptr = fopen("test1.txt", "a");
	fprintf(fptr,"Hello this is append method");
	fclose(fptr);
}
