#include<stdio.h>

main()
{
	int j,i,k;

	for(i=1;i<=5;i++)
	{
		for(k=1;k<=i;k++)
		{
			printf(" ");
		}
		for(j=5;j>=i;j--)
		{
			printf("%d",j);		
		}
		printf("\n");
	}
}
