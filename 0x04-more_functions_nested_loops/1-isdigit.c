#include "main.h"

/**
 * main - checks if input is a character or digit
 * returns 1 if characters and zero if number
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
