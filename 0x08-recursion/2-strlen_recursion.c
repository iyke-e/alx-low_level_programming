#include "main.h"
/**
 *  _strlen_recursion - returns the length of string
 *  @s: string to be returned (length)
 */

int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s)
	{
		len++;
		len += _strlen_recursion(s + 1);
	}
	return (len);
}
