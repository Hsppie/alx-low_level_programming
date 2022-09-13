/**
 * main - Entry point
 *
 * _putchar:a program to print putchar
 *
 * Return: always 0 (success)
 */
#include<stdio.h>

int main(void)
{
	char d[] = "_putchar";

	for (int count = 0; count <= 8; count++)
	{
		putchar(d[count]);
	}
	putchar('\n');
	return (0);
}
