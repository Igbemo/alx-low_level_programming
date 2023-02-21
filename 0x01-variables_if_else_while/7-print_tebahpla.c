#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - it will print numbers
 * void- creates empty parameter list for main.
 *
 * Description: Prints the alphabet in reverse order
 *
 * Return: 0 if cool
*/
int main(void)
{
	char h;

	for (h = 'z'; h >= 'a'; h--)
	{
		putchar(h);
	}
	putchar('\n');
	return (0);
}
