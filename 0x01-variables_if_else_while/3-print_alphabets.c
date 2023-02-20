#include <stdio.h>
/**
 * main - a program that prints lowercase and uppercase alphabets
 *x is the small letters and c is the capital letters
 * Return: return 0
 */
int main(void)
{
	char x, c;

	for (x = 'a'; x <= 'z'; x++)
	{
		putchar(x);
	}
	for (c = 'A'; c <= 'Z'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
