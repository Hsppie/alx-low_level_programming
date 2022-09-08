#include <stdio.h>
/**
 * main  - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char character;

	int integer;

	long inty;

	long long inter;

	float f;

	printf("Size of a char:%lu byte(s)\n", sizeof(character));
	printf("Size of an int: %lu bytes(s)\n", sizeof(integer));
	printf("Size of a long: %lu byte(s)\n", sizeof(inty));
	printf("Size of a long long: %lu byte(s)\n", sizeof(inter));
	printf("Size of a float %lu byte(s)\n", sizeof(f));
	return (0);
}
