#include <stdio.h>
#include <stddef.h>

int main(void)
{
	int n = 10; // 4 b

	int *pn = &n;
	printf("pn\taddr = %p\t val = %d\n", pn, *pn);

	pn++;
	printf("pn\taddr = %p\t val = %d\n", pn, *pn);

	pn--;
	printf("pn\taddr = %p\t val = %d\n\n", pn, *pn);

	double d = 11.1; // 8 b
	double *pd = &d;
	printf("pd\taddr = %p\t val = %f\n", pd, *pd);
	pd++;
	printf("pd\taddr = %p\t val = %f\n", pd, *pd);
	pd++;
	printf("pd\taddr = %p\t val = %f\n", pd, *pd);
	pd -= 2;
	printf("pd\taddr = %p\t val = %f\n\n", pd, *pd);

	char c = 'A'; // 1b
	char *pc = &c;
	printf("pc\taddr = %p\t val = %c\n", pc, *pc);
	pc++;
	printf("pc\taddr = %p\t val = %c\n", pc, *pc);


	int a = 10;
	int b = 11;
	int *pa = &a;
	int *pb = &b;
	ptrdiff_t diff = pa - pb;
	printf("pa %p\n", pa);
	printf("pb %p\n", pb);
	printf("diff %td\n", diff);


	int arr[64];
	int *p1 = &arr[10];
	int *p2 = &arr[40];
	ptrdiff_t dist = p2 - p1;
	printf("dict %td\n", dist);

	// void pointers
	int num1 = 11;
	int num2 = 22;
	int num3 = 33;
	int num4 = 44;

	void* p_num = &num1;
	printf("*p_num %d\n", *(int*)(p_num + 8));
	printf("*p_num %d\n", *(((int*)p_num) + 2) );

	return 0;
}
