#include "main.h"
/**
 * more_numbers - print 10 times the numbers from 0 - 14
 * Description: can only use _putchar 3 times
 */

void more_numbers(void)
{
	int c, n;

	for (c = 1; c <= 10; c++)
	{
		for (n = 0; n <= 14; n++)
		{
			if (n > 9)
				_putchar(n / 10 + '0');
			_putchar(n % 10 + '0');
		}
		_putchar ('\n');
	}
}

