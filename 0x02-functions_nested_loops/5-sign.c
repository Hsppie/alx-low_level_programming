#include "main.h"

/**
 * print_sign - Print sign of a number
 * @n: char type alphabet
 * Return: 1 if lowercase, 0 if not
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
