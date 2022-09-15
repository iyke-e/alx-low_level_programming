#include "main.h"
/**
 * print_numbers - print numbers from 0 - 9
 * Return: Always 0
 */


void print_numbers(void)
{
	int c;

	for (c = 0; c < 10; c++)
	{
		_putchar((c % 10) + '0');
	}
	_putchar('\n');
}
