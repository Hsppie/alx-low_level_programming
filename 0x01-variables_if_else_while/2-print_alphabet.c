#include <stdio.h>
/**
 * main - entry point
 *
 * A program that prints a-z using putchar
 *
 * Return: always 0 (sucess)
 */
int main(void)
{
	/* declaring place holder for a-z */
	char k;

	for (k = 'a'; k <= 'z'; k++)
	{
		putchar(k);
	}
	putchar('\n');

	return (0);
}
