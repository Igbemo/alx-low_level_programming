#include "main.h"
/**
 * prints__square -prints 
 * x and y do the work
 * return -void
 */


void print_square(int size)
{
	int k, i;

	for (k = 0; k < size; k++)
	{
		for (i = 0; i < size; i++)
			_putchar('#');
		_putchar('\n');
	}
	if (size < 1)
		_putchar('\n');
}
