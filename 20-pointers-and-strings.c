#include <string.h>
#include <stdio.h>

void print_str(char str[], size_t size)
{
	printf("---\n");
	for (int i = 0; i < size; i++)
	{
		printf("%d | %x %c\n", i, str[i], str[i]);
	}

	printf("---\n");
}

int main(void)
{
	char hi[] = "hi";
	char hi2[] = {'h', 'i', '\0'};


	char str1[5] = "abc";
	print_str(str1, sizeof str1);

	// char str2[5] = "abcdefg"; // warning
	// print_str(str2, sizeof str2);

	// string as char pointer
	char *hello = "Hello!";
	printf("pointer size %ld\n", sizeof hello);
	printf("%s\n", hello);

	// string interning
	char *s1 = "the same string";
	char *s2 = "the same string";
	printf("s1 addr %p %p\n", &s1, &s1[0]);
	printf("s2 addr %p %p\n", &s2, &s2[0]);
}

