#include <stdio.h>

int main(void)
{
	int a = 5;
	int b = 2;

	int c = a + b;
	printf("a + b = %d\n", c);

	c = a - b;
	printf("a - b = %d\n", c);

	c = a * b;
	printf("a * b = %d\n", c);

	c = a / b;
	printf("a / b = %d\n", c);

	float d = a / b;
	printf("a / b = %f\n", d);

	printf("5 / 2 = %f\n", 5.0 / 2);

	c = a % b;
	printf("a %% b = %d\n", c);

	printf("2 + 2 * 2 = %d\n", 2 + 2 * 2);
	printf("(2 + 2) * 2 = %d\n", (2 + 2) * 2);

	int x = 1;
	int y = ++x;
	printf("%d, %d\n", x, y);

	x = 1;
	y = x++;
	printf("%d, %d\n", x, y);

	x = 1;
	y = --x;
	printf("%d, %d\n", x, y);

	x = 1;
	y = x--;
	printf("%d, %d\n", x, y);

	int k = 1;
	int l = 2;
	int m = k+++l;
	printf("%d, %d, %d\n", k, l, m);

	return 0;
}
