#include "holberton.h"

/**
 * print_alphabet - prints th english aphabets in order
 **/

void print_alphabet(void)
{

	char o;

	for (o = 'a'; o <= 'z'; o++)
	{
		_putchar(o);
	}
	_putchar('\n');
}
