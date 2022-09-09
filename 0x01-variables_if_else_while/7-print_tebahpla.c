#include <stdio.h>
/**
 * main - main block
 * Description: print all the number of base 16 in lowercase.
 * Return: Always 0
 */
int main(void)
{
	int num;
	char letter;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');
	for (letter = 'a'; letter <= 'f'; letter++)
		putchar(letter, '\n');
	return (0);
}
