#include <stdio.h>

int main(void)
{
	int numbers[4];
	numbers[0] = 1;
	numbers[1] = 2;
	numbers[2] = 3;
	numbers[3] = 4;

	printf("%d %d %d %d %d %d\n", numbers[0], numbers[1], numbers[2], numbers[3], numbers[4], numbers[-1]);

	int numbers2[4] = { 11, 22, 33, 44 };

	printf("%d %d %d %d %d %d\n", numbers2[0], numbers2[1], numbers2[2], numbers2[3], numbers2[4], numbers2[-1]);

	int numbers3[4] = { 111, 222 };

	printf("%d %d %d %d %d %d\n", numbers3[0], numbers3[1], numbers3[2], numbers3[3], numbers3[4], numbers3[-1]);

	int numbers4[4] = { [1]=1111, [3]=3333 };

	printf("%d %d %d %d %d %d\n", numbers4[0], numbers4[1], numbers4[2], numbers4[3], numbers4[4], numbers4[-1]);

	printf("%ld %ld\n", sizeof(numbers[0]), sizeof(numbers));

	size_t len = sizeof(numbers) / sizeof(numbers[0]);
	printf("length %ld\n", len);

	for (size_t i = 0; i < len; i++)
	{
		printf("numbers[%zu] = %d\n", i, numbers[i]);
	}

	// dynamic size
	int maxSize = 3;
	int array[maxSize];
	array[0] = 1;
	array[1] = 2;
	array[2] = 3;
	for (int i = 0; i < maxSize; i++)
	{
		printf("%d\n", array[i]);
	}

	// const arrays
	const int constNumbers[3] = {1, 2, 3};
	// constNumbers[1] = 22;
	// printf("constNumbers[1] = %d", constNumbers[1]);

	int numbers2d[3][2] = { {1, 2}, {4,5}, {7, 8} };
	// int numbers2d[3][2] = { 11, 22, 44, 55, 77, 88 };
	printf("numbers[1][0] = %d\n", numbers2d[1][0]);

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			printf("[%d][%d] = %d\n", i, j, numbers2d[i][j]);
		}
	}

	// strings
	char message[] = "Hello";
	printf("message: %s\n", message);
	for (size_t i = 0; i < sizeof(message) / sizeof(char); i++)
	{
		printf("%ld\t%d\t%c\n", i, message[i], message[i]);
	}

	return 0;
}
