#include<stdio.h>
#include < assert.h>
#include <stdio.h>
double fun(int n)
{
	double result = 1.0;
	while (n > 1 && n < 170)
		/*********found*********/
		result *= --n;
	/*********found*********/
	return result;
}
main()
{
	int n;
	printf("Enter an integer: ");
	scanf_s("%d", &n);
	printf("\n\n%d!=%lg\n\n", n, fun(n));
}