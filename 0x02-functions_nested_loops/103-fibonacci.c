#include <stdio.h>
/**
 * main - Prints the sum of Even Fibonacci numbers
 * less than 4000000.
 * Return: Nothing!
 */
int main(void)
{
	int i = 0;
	long j = 1, k = 2, sum = k; //j = previous sum and k = current sum; j =1 and k =2 is our starting points

	while (k + j < 4000000) //so far the sum of previous and current is less than 400000000
	{
		k += j; // current sum = sum + previous sum
		if (k % 2 == 0) // if the sum is an even num 
			sum += k; // sum would be increase by the current sum
		j = k - j; // previous sum = current sum - previous sum
		++i; //keep increaseing the number value by 1 till condition above is met
	}
	printf("%ld\n", sum); //finally print the sum of all the sums in the sequence
	return (0);
}
