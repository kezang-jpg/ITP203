#include <stdio.h>
int main()
{
	
	double x=10.22;
	int y=10;
	char z='p';
	float ans, ans1;

	ans = (float)x+(float)y+(float)z;
	ans1 = (float)x+y+z;
	printf("Answer is = %f", ans);
	printf("Answer is = %f", ans1);

	return 0;
}