#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Prints alphabet
 * @void: Empty parameter list for main.
 *
 * Description: Prints the alphabet in lower case
 * Can only use putchar
 *
 * Return: 0 for success
*/
int main(void)
{
	char l_L = 'a';

	while (l_L <= 'z')
	{
		putchar(l_L);
		l_L++;
	}
	putchar('\n');
	return (0);
}
