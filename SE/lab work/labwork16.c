#include<stdio.h>
main()
{
	int n,i=1,ev=0,odd=0,evcount=0,oddcount=0;
	
	
	while(i<=5)
	{
	printf("Enter number :");
	scanf("%d",&n);
	
	if(n%2==0)
	{
		printf("%d is even number :",n);
		ev++;
		evcount=evcount+n;
	}
	else
	{
		printf("%d is odd number :",n);
		odd++;
		oddcount=oddcount+n;	
	}
	i++;
}

	printf("\nsum of even :%d",ev);
	printf("\nsum of odd :%d",odd);
	printf("\nsum of evencount :%d",evcount);
	printf("\nsum of oddcount :%d",oddcount);
}
