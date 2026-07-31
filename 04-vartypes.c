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
}
