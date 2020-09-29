#include <stdio.h>
int main()
{
 char A[2][4]={{'A','B','C','D'},{'a','b','c','d'}};
 char B [2][4]={{'A','B','C','D'},{'E','F','G','H'}};
  for (int i=0;i<2;i++)
  {
  	for(int j=0;j<4;j++)
  	{
  		int z=A[i] [j]==B[i][j];
  		printf("%d ",z);
  	}

  }
  	return 0;
}