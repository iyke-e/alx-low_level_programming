#include "main.h"
#include <stdio.h>
/**
 * main - code block
 * Description: print fixx if num is a multiple of 3
 * and buzz if num is a multiple of 5
 * Return: Always 0
 */

int main(void)
{
	int n;

	for (n = 1; n < 101; n++)
	{
		if (n % 3 = 0)
			printf("Fizz");
		else if (n % 5 = 0)
			printf("Buzz");
		else if (n % 15 = 0)
			printf("FizzBuzz");
		else
			printf("%i", n);
		if (n < 100)
			printf(" ");
	}
	printf("\n");

	return (0);
}
