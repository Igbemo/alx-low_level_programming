#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - it will print base 10 numbers
 * void- creates empty parameter list for main.
 *
 * Description: code will prints numbers 0-9
 *
 * Return: 0 if cool
*/
int main(void)
{
	char n = '0';

	while (n <= '9')
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
