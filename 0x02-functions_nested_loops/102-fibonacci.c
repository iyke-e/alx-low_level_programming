#include <stdio.h>
/**
 * main - Prints the first 52 fibonacci numbers
 * Return: Nothing!
 */
int main(void)
{
/**
*Fibonacci numbers forms a sequence by add the two number before them e.g 0, 1, 1, 2, 3, 5 e.t.c*/
	int i = 0; //inital number 0
	long j = 1, k = 2; //starting numbers are 1 followed by 2

	while (i < 50) // so far the number is less than 50
	{
		if (i == 0) //and i is 0 this next number would be 1 therefore j
			printf("%ld", j); //so print j
		else if (i == 1) // but if i = 1 next number would be 1+1 = 2
			printf(", %ld", k);// so print k
		else
		{
			k += j; //else keep adding k to j 
			j = k - j; // j which represent previous number will be k - j i.e current number - previous number
			printf(", %ld", k); //keep updating the current number i.e k
		}
		++i; //continue incrementing the initial number till the condition above is no longer valid
	}
	printf("\n"); // add a new line
	return (0);
}
