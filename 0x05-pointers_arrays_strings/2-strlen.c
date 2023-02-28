#include "main.h"

/**
 * _strlen - returns the length of the string in c programming
 * @s: return lenght of string
 * Description: returns the length of a given string
 * Return: length of string
 **/
size_t _strlen(char *str)
{
	size_t length = 0;

	while (*str++)
	length++;
	return (length);
}
