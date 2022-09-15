#include "main.h"
/**
 * _isdigit - check if c is a digit within 0 -9
 * @c: character to be checked
 * Return: 1 if c is a digit, 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
