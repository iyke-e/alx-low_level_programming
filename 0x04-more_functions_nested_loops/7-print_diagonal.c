#include "main.h"

/**
 * print_diagonal - funtion that draws diagonal lines
 * @n: number of space before line
 */

void print_diagonal(int n)
{
	int c, s;

	if (n > 0)
	{
		for (c = 1; c <= n; c++)
		{
			for (s = 1; s < count; s++)
				_putchar(' ');	

			_putchar('\\')
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
