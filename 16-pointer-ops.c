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
	// printf("*pa | %d\n", *pa); // segfault

	// void pointer
	int x = 123;
	int *ip = &x;
	void *vp;
	vp = ip;
	printf("vp %d\n", *((int *)vp));
	// printf("vp %d\n", *vp); // cannot

	// pointer address
	int aa = 10;
	int *paa = &aa;
	printf("address of pointer = %p\n", &paa);
	printf("address in pointer = %p\n", paa);
	printf("value on pointer = %d\n", *paa);

	// comparsion operations
	int k = 10;
	int l = 20;
	int *pk = &k;
	int *pl = &l;
	if (pk > pl)
		printf("pk (%p) is greater than pl (%p)\n", pk, pl);
	else
		printf("pk (%p) is is less or equal pl (%p)\n", pk, pl);

	// type casting
	char c = "A";
	char *pc = &c;
	int *pd = (int *)pc;
	printf("pc = %p\n", pc);
	printf("pd = %p\n", pd);
}

