#include <stdio.h>

int main(void)
{
	for (int i = 0; i < 3; i++)
	{
		printf("for %d\n", i);
	}

	for (int i = 0; i < 10; i++)
	{
		printf("%d * %d = %d\n", i, i, i*i);
	}

	int i = 0;
	for ( ; i < 10 ; )
	{
		printf("%d * %d = %d\n", i, i, i*i);
		i++;
	}

	do
	{
		printf("do-while %d\n", i);
		i--;
	}
	while (i > 0);

	while (i < 10)
	{
		printf("while %d\n", i);
		i++;
	}


	for (i = 0; ; i++)
	{
		if (i > 10) break;
		if (i % 2 == 0) continue;
		printf("-%d\n", i);
	}

	return 0;
}
