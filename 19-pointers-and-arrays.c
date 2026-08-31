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

	int *ptr = numbers;
	printf("value: %d\n", *ptr);
	ptr += 2;
	printf("value: %d\n", *ptr);

	*ptr = 333;
	printf("numbers[2] = %d\n", numbers[2]);

	// iterate an array with a pointer
	for(int *p_n = numbers; p_n <= &numbers[4]; p_n++)
	{
		printf("addr %p val %d\n", p_n, *p_n);
	}

	// iterate multidimensional array
	int array[3][4] = {{11, 12, 13, 14}, {21, 22, 23, 24}, {31, 32, 33, 34}};
	int n = sizeof(array) / sizeof(array[0]);
	int m = sizeof(array[0]) /sizeof(array[0][0]);

	int *final = array[0] + n * m - 1;
	for(int *p = array[0], i = 1; p <= final; p++, i++)
	{
		printf("%d \t", *p);
		if (i % m == 0)
		{
			printf("\n");
		}
	}

	return 0;
}
