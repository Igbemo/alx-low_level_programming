#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Prints alphabets except q and e
 * void: Empty parameter list for main.
 *
 * Description: Prints the alphabet in lower case
 * Skip q and e
 * Can only use putchar
 *
 * Return: 0 if i pass
*/
int main(void)
{
	char l_r = 'a';

	while (l_r <= 'z')
	{
		if (l_r == 'q')
		{
			l_r++;
		}
		else if (l_r == 'e')
		{
			l_r++;
		}
		else
		{
			putchar(l_r);
			l_r++;
		}
	}
	putchar('\n');
	return (0);
}
