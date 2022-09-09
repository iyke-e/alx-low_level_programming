#include <stdio.h>
/**
 * main -main block
 * Descriptio: Print the alphabets in lowercase
 * Return: always 0.
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);
	putchar('\n');
		return (0);
}
