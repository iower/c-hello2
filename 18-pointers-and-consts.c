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
	printf("pa addr %p\t val %d\n", pa, *pa);

	// *pa = 11; // error: assignment of read-only location ‘*pa’

	int b = 20;
	const int *pb = &b;
	printf("pb addr %p\t val %d\n", pb, *pb);

	// *pb = 21; // error: assignment of read-only location ‘*pb’


	// const pointer
	int c = 30;
	int * const pc = &c;
	printf("pc addr %p\t val %d\n", pc, *pc);

	*pc = 31;
	printf("pc addr %p\t val %d\n", pc, *pc);

	// pc = &b; // error: assignment of read-only variable ‘pc’


	// const pointer to const
	int d = 40;
	const int * const pd = &d;

	// *pd = 41; // error: assignment of read-only location ‘*pd’
	d = 41;
	// pd = &b; // error: assignment of read-only variable ‘pd’


	return 0;
}
