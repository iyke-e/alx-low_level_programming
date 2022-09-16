#include "main.h"
/**
 * print_triangle - print triangle
 * @size: size of triangle
 */

void print_triangle(int size)
{
	int spc, hash;

	if (size > 0)
	{
		for (spc = 0; spc < size; spc++)
		{
			_putchar(' ');

			for (hash = 0; hash < spc; hash++)
			{ 
				_putchar('#');
			}

			if (hash == spc - 1)
				continue;

			_putchar('\n');
		}
	}
	_putchar('\n');
}
