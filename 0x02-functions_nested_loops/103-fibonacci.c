#include <stdio.h>
/**
 * main - Prints the sum of Even Fibonacci numbers
 * less than 4000000.
 * Return: Nothing!
 */
int main(void)
{
	int i = 0;
	long j = 1, k = 2, sum = k; // sum = k means initial sumTotal of all even number is k because only 2 is even in the series at the moment

	while (k + j < 4000000) //so far the sum of all the sums in the squence is less than 400000000
	{
		k += j; // next sum = current sum + previous sum
		if (k % 2 == 0) // if the current sum is an even num 
			sum += k; // sumTotal would be increase by the current sum
		j = k - j; // previous sum = next sum - previous sum
		++i; //keep increaseing the number value by 1 till condition above is met
	}
	printf("%ld\n", sum); //finally print the sum of all the even sums in the sequence
	return (0);
}
