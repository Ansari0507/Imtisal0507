#include<stdio.h>
main()

{
		int n;
    printf("enter number : ");
	scanf("%d",&n);
	
	
	if(n%4==0)
	{
		printf("%d is leap year ", n);
		
	}
	else
	{
		printf("%d is normal year", n);
	}
}
