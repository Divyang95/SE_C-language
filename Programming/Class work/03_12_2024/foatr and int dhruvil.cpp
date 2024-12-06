#include <stdio.h>
 main() 
 {
    float n;
    
    printf("Enter a number: ");
    scanf("%f", &n);
    
    
    if (n==(int)n) 
	{
        printf("The number %f is an integer.\n", n);
    } 
	else 
	{
        printf("The number %f is a float.\n", n);
    }
}
