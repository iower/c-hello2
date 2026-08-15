#include <stdio.h>

int main(void)
{
	int x = 10;
	int* p;
	p = &x;
	printf("%p\n", p);

	printf("sizeof p = %ld\n", sizeof(p));

	printf("x = %d\n", *p);

	*p = 11;
	printf("x = %d\n", *p);

	char c = 'A';
	int d = 10;
	short s = 2;

	char *pc = &c;
	int *pd = &d;
	short *ps = &s;

	printf("%p | %c\n", pc, *pc);
	printf("%p | %d\n", pd, *pd);
	printf("%p | %d\n", ps, *ps);

	return 0;
}
