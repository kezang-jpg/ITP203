#include <stdio.h>
int main()
{
	int a[8]={ 0, 0, 0, 0, 1, 1, 1, 1 };
	int b[8]={ 0, 0, 1, 1, 0, 0, 1, 1 };
	int c[8]= { 0, 1, 0, 1, 0, 1, 0, 1 };
	for(int i=0;i<8;i++)
	{
		int z= a [i] && b[i] && c[i];
		printf("%d",z);
	}

}