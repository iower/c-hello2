#include <stdio.h>

int main(void)
{
	int numbers[] = {11, 22, 33, 44, 55};

	printf("arr addr = %p\n", numbers);
	printf("sizeof arr %ld\n", sizeof(numbers));

	for (size_t i=0; i < (sizeof(numbers) / sizeof(numbers[0])); ++i)
	{
		printf("numbers[%ld]: %p\n", i, numbers+i);
	}

	printf("%d\n", *numbers);
	printf("%d\n", *(numbers+1));
	printf("%d\n", numbers[1]);
	printf("%d\n", 1[numbers]);
}
