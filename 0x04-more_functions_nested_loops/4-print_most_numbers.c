#include "main.h"
/**
 * print_most_numbers - print num from 0 - 9 ecept 4 and 2
 * Return: Always 0
 */

void print_most_numbers(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		if (n == 2 || n == 4)
			continue;
		else
			_putchar((n % 10) + '0');
	}
	_putchar('\n');
}
