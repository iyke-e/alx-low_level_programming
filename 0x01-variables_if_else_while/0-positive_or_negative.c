#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - block
 * Descrition: geting a random number and print the number
 * and if it is positive, renagetince or zero
 * Return: 0
 */
int main(void)
{
	int n;	
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%i is positive\n", n);
	else if (n < 0)
		printf("%i is negative\n", n);
	else
		printf("%i is zero\n", n);
	return (0);
}
