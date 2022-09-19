#include "main.h"
/**
 *  _strlen - function returns the length of a string.
 *  @s: string to get length of
 *  Return: len of s
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s++)
		len++;
	return (len);
}
