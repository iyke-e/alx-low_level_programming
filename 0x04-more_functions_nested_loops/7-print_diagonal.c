#include "main.h"
/**
 * print_diagonal - print diagonal line
 * @n: number of times \ is printed
 */

void print_diagonal(int n)
{
	int d, s;

	while (n > 0)
	{
		for (d = 0; d < n; d++)
		{
			for (s = 0; s < d; s++);
			{
				_putchar(' ');
			}
			_putchar ('\\');
			_putchar ('\n');
		}
	}
	_putchar ('\n');
}
