//Exit control loop is do while loop 
//for loop and while loops are Entry control loops
//difference between entry control loop and exit control loop is in case of exit control loop it executes once compulsory without checking the condition after execution it checks the condition
//if condition is true then only it goes inside of loop. wheras in entry control loop it compulsory checks first condition if condition is true then only it executes insode loop

#include<stdio.h>
main(){
	
	int i=1;
	do{
		printf("%d\n",i);
		i++;
	} while(i<=10);
	
}
