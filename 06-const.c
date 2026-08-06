#include <stdio.h>

int main(void)
{
	int number = 2;
	printf("%d\n", number);
	number = 3;
	printf("%d\n", number);

	const int number2 = 2;
	printf("%d\n", number2);
	// number2 = 3;
	// printf("%d\n", number2);

	const float PI = 3.14;

	return 0;
}
