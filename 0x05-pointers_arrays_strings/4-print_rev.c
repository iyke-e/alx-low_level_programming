#include "main.h"

/**
 * print_rev - function print string in reverse
 * @s: string to be printed in reverse
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i])
		i++;

	for (i = i - 1; i >= 0; i--)
		_putchar(s[i]);

	_putchar('\n');
}
