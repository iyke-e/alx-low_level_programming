#include "main.h"
#include <stdio.h>
#include <math.h>
/**
 * main - main block
 * Description: Print the sum of all multiples of 3 or 5 below 1024.
 * Return: 0
 */
int main(void)
{
	int i = 1; // starting from number 1
	int total = 0; // initial sum should be 0

	while (i < 1024) // so far number has not gotten to 1024
	{
		if (i % 3 == 0) // if the number is divisible by 3
			total += i; // add it to the initial sum
		else if (i % 5 == 0) // or if the number is divisible by 5 
			total += i; // also add it to the sum
		i++; // keep incrementing the number by 1 to check for the coondition above
	}
	printf("%d\n", total); //finally print the total sum
	return (0);
}
