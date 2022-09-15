#include "main.h"
/**
 * print_line - print _ in n number of times
 * Description: if n is 0 prin \n
 * @n: number of times to print _
 */

void print_line(int n)
{
	if (n > 0)
	{
		int c;

		for (c = 1; c <= n; c++)
			_putchar('_');
	}
	else
		_putchar('\n');
}
