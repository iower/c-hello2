#include <stdio.h>

int main()
{
	printf("Hi\n");
	printf("\' \" \\ %% \n");

	float r = 12.345;
	printf("%f\n", r);
	printf("%e\n", r);
	printf("%4.2f\n", r);

	char symbol = 'r';
	printf("%c\n", symbol);

	unsigned int num = 23;
	printf("num = %u\n", num);

	printf(">%s \n", "Hi!");

	short a = 100;
	printf("a = %hd\n", a);

	printf("name: %s\tAge: %d\t weight=%3.2f\n", "Tom", 20, 80.1234);

	printf("%d\n", 8);

	printf("% d\n", 8);
	printf("% d\n", -8);

	printf("%+d\n", 8);
	printf("%+d\n", -8);

	printf("%#o\n", 8);
	printf("%#x\n", 8);
	printf("%#f\n", 8.);

	printf("%9s %d\n", "Tom", 20);
	printf("%-9s %d\n", "Tom", 20);
	printf("%-9s %d\n", "Tom4567890123", 20);

	return 0;
}
