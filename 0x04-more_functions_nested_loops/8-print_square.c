#include "main.h"
/**
 * print_square - prints square
 * @size: size of square
 */

void print_square(int size)
{
	int sqh, sqw;

	if (size > 0)
	{
		for (sqh = 0; sqh < size; sqh++)
		{
			for (sqw = 0; sqw < size; sqw++)
				_putchar('#');
			
			_putchar('\n');
		}
	}
	_putchar('\n');
}
