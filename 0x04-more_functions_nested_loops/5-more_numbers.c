#include "main.h"

/**
 * more_numbers - print 10 times num 0 - 14
 * Return: Always 0
 */

void more_numbers(void)
{
	int num, count;

	for (count = 0; count < 10; count++;)
	{
		for (num = 0; num < 15; num++)
		{
			if (num > 9)
				_putchar ((num / 10) + '0');
				_putchar((num % 10) + '0');
		}
	}
	_putchar('\n');
}
