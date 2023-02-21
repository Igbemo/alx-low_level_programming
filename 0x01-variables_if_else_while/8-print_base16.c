#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - it will print numbers in base 16
 * void- creates empty parameter list for main.
 *
 * Description: Prints in another base
 *
 * Return: 0 if cool
*/
int main(void)
{
	int num = 0;
	char m;

	while (num <= 9)
	{
		putchar(num);
		num++;
	}

	m = 'a';

	while (m <= 'f')
	{
		putchar(m);
		m++;
	}
	putchar('\n');
	return (0);
}
