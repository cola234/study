#include<stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	scanf_s("%d", &a);
	printf(" ‰»Î£∫%d\n", a);
	if (a < 0) {
		b = 1;
	}
	else if (a == 0) {
		b = 0;
	}
	else {
		b = -1;
	}
	printf(" ‰≥ˆ£∫%d\n", b);
	return 0;
}