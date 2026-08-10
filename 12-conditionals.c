#include <stdio.h>

int main(void)
{
	if (1) printf("1\n");
	if (0) printf("0\n");

	int n = 10;
	if (n == 10) printf("n = 10\n");
	if (n == 20) printf("n = 20\n");

	n = 60;
	if (n > 50)
	{
		printf("> 50\n");
	}

	if (n > 50)
		printf("> 50\n");
	else
		printf("<= 50\n");

	if (n > 60)
		printf("> 60\n");
	else if (n == 60)
		printf("== 60\n");
	else
		printf("< 50\n");

	int x = 2;

	switch (x)
	{
		case 1:
			printf("1\n");
			break;
		case 2:
			printf("2\n");
			break;
		default:
			printf("default\n");
			break;
	}

	switch (x)
	{
		default:
			printf("default\n");
			break;
		case 1:
			printf("1\n");
			break;
		case 2:
			printf("2\n");
			break;
	}

	int a = 5;
	int b = 2;
	printf("%d\n", a > b ? a-b : a+b);

	return 0;
}
