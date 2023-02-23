#include "main.h"
/**
 * main - determines if a character is uppercase or lower case
 * return 1 if upper case and 0 if lower
 */

int _isupper(int c)
{
	if (c >= 'A' && c >= 'Z')
	{
		return (1);
	}
	return (0);

}
