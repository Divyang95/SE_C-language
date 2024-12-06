#include<stdio.h>

main()
{
	int a;
	
	printf("Enter Number of Year :");
	scanf("%d",&a);
	
	printf("Days are : %d",365*a);
	
	//months to year conversion
	int b;
	
	printf("\nEnter Number of months : ");
	scanf("%d", &b);
	
	printf("Years are : %0.2f",(float)b/12);
	
}
