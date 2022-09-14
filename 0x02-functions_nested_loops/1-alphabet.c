#include "main.h"
/**
 * print_alphabet - alphabet block
 * Description: Print alphabet in lowercase
 * Return: Always 0
 */
void print_alphabet(void);
{
	char letter = 'a';

	for (; letter <= 'z'; letter++)
	{
		putchar(letter);
	}
	putchar('\n');
}
