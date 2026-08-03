#include <stdio.h>

int main(void)
{
	char ch;
	unsigned char uch;
	signed char sch;
	printf("char size: %ld, %ld, %ld\n", sizeof(ch), sizeof(uch), sizeof(sch));

	short sh;
	unsigned short ush;
	printf("short size: %ld, %ld\n", sizeof(sh), sizeof(ush));

	int i;
	unsigned int ui;
	printf("int size: %ld, %ld\n", sizeof(i), sizeof(ui));

	long l;
	unsigned long ul;
	printf("long size: %ld, %ld\n", sizeof(l), sizeof(ul));

	long long ll;
	unsigned long long ull;
	printf("long long size: %ld, %ld\n", sizeof(ll), sizeof(ull));

	float f;
	printf("float size: %ld\n", sizeof(f));

	double d;
	printf("double size: %ld\n", sizeof(d));

	long double ld;
	printf("long double size: %ld\n", sizeof(ld));

	// suffixes

	unsigned a1 = 0u;
	unsigned long a2 = 0ul;
	long long a3 = 0ll;
	unsigned long long a4 = 0ull;
	printf("a: %d, %ld, %lld, %lld\n", a1, a2, a3, a4);

	// numeral systems

	int code1 = 0b1011;
	int code2 = 013;
	int code3 = 11;
	int code4 = 0xB;
	printf("%d, %d, %d, %d\n", code1, code2, code3, code4);

	// floating-point numbers
	float number0 = 3.14;
	printf("%f\n", number0);

	double number1 = 3.14159;
	printf("%lf\n", number1);

	long double number2 = 123456.789l;
	printf("%Lf\n", number2);

	// chars

	char letter = 'A';
	printf("%c = %d\n", letter, letter);

	// typedef

	typedef unsigned char BYTE;
	BYTE byte1 = 22;
	printf("byte1 = %d\n", byte1);

	return 0;
}
