//Structure and union
#include<stdio.h>
#include<string.h>

struct Mystructure{
	int a[5]; //data members
	int i; //data member
}s1;

main(){
	//struct Mystructure s1; declaration of s1 whether by this as left side we can just write
	//s1 above after curly bracket of completing struct
	//s1 is variable
	
	for(s1.i=0;s1.i<5;s1.i++){
		
		printf("Enter element : ");
		scanf("%d",&s1.a[s1.i]);
		
		
	}
	
	for (s1.i=0;s1.i<5;s1.i++){
		printf("Number is : %d",s1.a[s1.i]);
	}
}
