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
			for (spc = 1; spc <= size; spc++)
			{
				if (spc <= size - hash)
					_putchar(' ');
				else
					_putchar('#');
				
				_putchar('\n');
			}
		}
	}_putchar('\n');
}
