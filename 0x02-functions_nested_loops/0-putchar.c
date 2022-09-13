#include "main.h"
/**
 * main - Entry point
 *
 * Description: A  program that prints _putchar, followed by a new line.
 *
 * Return: always 0 (success)
 */

int main(void)
{
	char k[] = "_putchar";

	int i = 0;

	while (k[i] != '\0')
	{
		_putchar(k[i]);
		i++;

	}
	_putchar('\n');
	return (0);
}
