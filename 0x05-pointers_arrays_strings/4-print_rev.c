#include "main.h"

/**
 * print_rev - function print string in reverse
 * @s: string to be printed in reverse
 */

void print_rev(char *s)
{
	int len = 0, index = len - 1;

	while(s[index++])
		len++;

	for (index; index >= 0; index--)
		_putchar(s[index]);

	_putchar('\n');
}
