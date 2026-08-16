#include <stdio.h>

int main(void)
{
	int a = 10;
	int b = 2;

	int *pa = &a;
	int *pb = &b;

	printf("pa | %p | %d\n", pa, *pa);
	printf("pb | %p | %d\n", pb, *pb);

	pa = pb;
	printf("pa | %p | %d\n", pa, *pa);
	printf("pb | %p | %d\n", pb, *pb);

	// NULL

	int *new_pointer = NULL;

	*pa = 25;
	printf("*pa | %d\n", *pa);

	pa = NULL;
	printf("pa | %p\n", pa);
	printf("*pa | %d\n", *pa);
}

