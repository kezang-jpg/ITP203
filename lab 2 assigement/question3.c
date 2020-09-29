#include <stdio.h>
int main()
{
	int number=5;
	//printf("entry any number:");
	//scanf("%d", &number);
	for(int i=0;i<=number;i++)
	{
		for (int j=0;j<=i;j++)
		{
			printf("%d  ",j);
		}
		printf("\n");
	}
	return 0;
}