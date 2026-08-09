#include <stdio.h>
#include <limits.h>

void print_binary(unsigned int n) {
    int bits = sizeof(n) * CHAR_BIT;
    int started = 0;

    for (int i = bits - 1; i >= 0; i--) {
        int bit = (n >> i) & 1;

        if (bit) started = 1;

        if (started) {
            printf("%d", bit);
        }
    }

    if (!started) printf("0");
    printf("\n");
}

int main(void)
{
	print_binary(2);
	print_binary(2 << 2);

	print_binary(16);
	print_binary(16 >> 3);

	printf("---\n");

	print_binary(5);
	print_binary(2);
	print_binary(5 | 2);

	printf("---\n");

	print_binary(6);
	print_binary(2);
	print_binary(6 & 2);

	printf("---\n");

	print_binary(5);
	print_binary(2);
	print_binary(5 ^ 2);

	printf("---\n");

	print_binary(12);
	print_binary(~12);

	printf("%d\n", ~12);

	printf("---\n");

	// check bit 5
	print_binary(255);
	print_binary(1 << 5);
	print_binary(255 & (1 << 5));
	print_binary(!!(255 & (1 << 5)));

	printf("---\n");

	print_binary(128);
	print_binary(1 << 5);
	print_binary(128 & (1 << 5));
	print_binary(!!(128 & (1 << 5)));

	printf("---\n");

	// reset bit 5
	print_binary(255);
	print_binary(1 << 5);
	print_binary(255 & ~(1 << 5));

	printf("---\n");

	// set bit 2
	print_binary(128);
	print_binary(1 << 2);
	print_binary(128 | (1 << 2));

	return 0;
}
