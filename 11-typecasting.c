#include <stdio.h>

int main(void)
{
	char c = 1;
	int d = c;

	int n1 = 10;
	double n2 = 4;
	double res = n1 + n2;
	printf("res = %f\n", res);

	int x = 10;
	int y = 4;
	int z = x / y;
	double d1 = x / y;
	double d2 = (double)x / (double)y;

	printf("%d\n", z);
	printf("%f\n", d1);
	printf("%f\n", d2);

	int number = 70;
	char symbol = (char) number;
	printf("symbol = %c = %d\n", symbol, symbol);

	// loss
	int number1 = 300;
	char code = number1;
	printf("code = %d\n", code);

	short number2 = 100000;
	printf("number2 = %d\n", number2);
}

