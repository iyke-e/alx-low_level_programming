#include "main.h"
/**
 *  print_times_table - Prints a multiplication table up to param
 *  @n: The number to be treated
 *  Return: Number matrix
 */
void print_times_table(int n)
{
	int x, y, z; // x = num1, y = num 2, z = product of the x and y

	if (n >= 0 && n <= 14) // if n is less than or equal to zero and n is greater than or equal to 14
	{
		for (x = 0; x <= n; x++) //run the possible values of x till x = n
		{
			for (y = 0; y <= n; y++) // run the possible value for y till y = n
			{
				z = x * y; // multiply x and y 
				if (z > 99) // if the product of x and y is greater than 99 i.e 3 digits
				{
					_putchar(','); //add comman
					_putchar(32); // add space
					_putchar((z / 100) + '0'); //get the first digit of the product
					_putchar(((z / 10) % 10) + '0'); //get the second digit of the product
					_putchar((z % 10) + '0'); //get the last digit of the product
				}
				else if (z > 9) // if the product of x and y is greater than 9 i.e two digit
				{
					_putchar(',');  //add comma
					_putchar(32); //add space
					_putchar(32); //add space
					_putchar(((z / 10) % 10) + '0'); //get first digit 
					_putchar((z % 10) + '0'); // get the second digit
				}
				else
				{
					if (y != 0) //if the second num 7 is not 0
					{
						_putchar(','); //add comma
						_putchar(32); //add space
						_putchar(32); //add space
						_putchar(32); //add space
					}
					_putchar(z + '0'); //or just write the product
				}
			}
			_putchar('\n'); // and add a new line
		}
	}
}
