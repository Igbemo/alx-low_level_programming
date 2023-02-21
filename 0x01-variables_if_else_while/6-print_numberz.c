#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - it will print numbers
 * void- creates empty parameter list for main.
 *
 * Description: code will prints numbers 0-9
 *
 * Return: 0 if cool
*/
int main(void)
{
	int h;

	for (h = 0; h < 10; h++)
	{
		putchar(h + '0');
	}
	putchar('\n');
	return (0);
}
