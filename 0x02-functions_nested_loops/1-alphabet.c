#include "main.h"
/**
 * print_alphabet - alphabet block
 * Description: Print alphabet in lowercase
 * Return: Always 0
 */
void print_alphabet(void);
{
	char letter = 'a';	
	while (letter <= 'z')
	{
		putchar(letter);
		letter++
	}
	putchar('\n');
}
