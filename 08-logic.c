#include <stdio.h>

int main(void)
{
	int a = 10;
	int b = 4;
	printf("a == b: %d\n", a == b);

	int c = 2 + 2;
	printf("b == c: %d\n", b == c);

	printf("a != b: %d\n", a != b);

	printf("a > b: %d\n", a > b);
	printf("a < b: %d\n", a < b);

	printf("a >= b: %d\n", a >= b);
	printf("a <= b: %d\n", a <= b);

	printf("!2 = %d\n", !2);
	printf("!0 = %d\n", !0);

	printf("2 && 1 = %d\n", 2 && 1);
	printf("2 && 0 = %d\n", 2 && 0);

	printf("2 || 1 = %d\n", 2 || 1);
	printf("2 || 0 = %d\n", 2 || 0);
	printf("0 || 0 = %d\n", 0 || 0);
}
