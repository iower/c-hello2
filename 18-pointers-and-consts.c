#include <stdio.h>

int main(void)
{
	// changeable const
	const int cx = 10;
	*(int*)&cx = 20;
	printf("cx = %d\n", cx);

	int* cx_p = (int*) &cx;
	*cx_p = 30;
	printf("cx = %d\n", cx);

	// pointer to const
	const int a = 10;
	const int *pa = &a;
	printf("addr %p\t val %d\n", pa, *pa);

	return 0;
}
