#include "main.h"
/**
 * print_diagonal - funtion that draws diagonal lines
 * @n: number of space before line
 */

void print_diagonal(int n)
{
	int count, space;

	if (n > 0)
	{
		for (count = 1; count <= n; count++)
		{
			for (space = 1; space < count; space++)
			{
				_putchar(' ');
			}
			_putchar(92)
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
