#include "main'h"

/**
 * more_numbers - print 10 times num 0 - 14
 * Return: Always 0
 */

void more_numbers(void)
{
	int num;
	int t;

	for (t = 0; t < 11; t++)
	{
		for (num = 0; num < 14; num++)
			_putchar((num % 10) + '0');
	}
	_putchar ((num % 10) + '0');
	_putchar ('\n');
}
