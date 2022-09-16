#include "main.h"
/**
 * print_triangle - print triangle
 * @size: size of triangle
 */

void print_triangle(int size)
{
	int s, h;

	if (size > 0)
	{
		for (h = 1; h <= size; h++)
		{
			for (s = size - h; s > 0; s--)
				_putchar(' ');

			for (s = 0; s < h; s++)
				_putchar('#');

			if (h == size)
				continue;

			_putchar('\n');
		}
	}
	_putchar('\n')

}
