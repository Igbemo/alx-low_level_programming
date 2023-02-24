#include "main.h"

/**
 * print_line - print a line
 * main- length of line functions
 * Return: void
 **/

void print_line(int n)
{
	while (n >= 1)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}
