#include "main.h"
#include <string.h>

/**
 * _puts_recursion - prints a string followed by a new line
 * @s: string to ba printed
 * Return: void
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	else
	{
		_putchar(*s);
	_puts_recursion(s + 1);
	}

}
<<<<<<< HEAD

=======
>>>>>>> 49325ca40954eb06428bc404d5477789bb41aa53
