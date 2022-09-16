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
		for (hash = 1; hash <= size; hash++)
		{
			for (spc = size - hash; spc <= size; spc--)
				_putchar(' ');

			for (spc = 0; spc < hash; spc++)
				_putchar('#');

			if (hash == size)
				continue;

			_putchar('\n');
		}
	}
	_putchar('\n')

}
