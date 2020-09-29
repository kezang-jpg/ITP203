#include <stdio.h>
int main()
{
	int numbers;
	printf("entry any number to to see:");
	scanf("%d",&numbers);
	for (int i=1;i<=numbers;i++)
	{
		for (int j=1;j<=i;j++)
		{

			printf("*");
		}
		printf("\n");
	}
	
}
		
