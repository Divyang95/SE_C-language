#include<stdio.h>
#include<math.h>

main(){
	float input;
	
	printf("Enter a number i will say which is this : ");
	scanf("%f",&input);
	
	if(floor(input) == input){
		printf("Number is not decimal %0.2f it is an integer",input);
	}
	
	else{
		printf("number is Decimal Number %0.2f it is decimal",input);
	}
	
}
