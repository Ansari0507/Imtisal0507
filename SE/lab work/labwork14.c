#include<stdio.h>
main()
{
	int n1,n2,n3;
	printf("enter value of n1 : ");
	scanf("%d",&n1);
	printf("enter value of n2 : ");
	scanf("%d",&n2);
	printf("enter value of n3 : ");
	scanf("%d",&n3);
	
	if(n1>n2)
	{
		if(n1>n3)
		{
			printf("%d is greatest :",n1);
		}
		else
		{
			printf("%d is greatest :",n2);
		}
	}
	else
	{
		printf("%d is greatest :",n3);
	}
}
