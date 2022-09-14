#include "main.h"
/**
 * times_table - Prints the 9 times table, starting with 0
 * Return: empty output
 */
void times_table(void)
{
	int x, y, z, u, d;
	/*
	num 1 = x
	num 2 = y
	z = num1 x num2
	u = second digit of the result of z 
	d = firts digit of the reult of z
	*/
	
	for (x = 0; x <= 9; x++)
	{
		/* print 1-9 for x*/
		for (y = 0; y <= 9; y++)
		{
			/* print 1-9 for y*/
			z = x * y;
			if (z > 9)
				//if x is more than 9 i'e two digits
		{
			u = z % 10; // get the second digit
			d = (z - u) / 10; //get the first digit
			_putchar(44); //add comma
			_putchar(32); //add space
			_putchar(d + '0'); // write first digit
			_putchar(u + '0'); // write second digit
		}
			else
			{
				if (y != 0) //if num2 is not 0
				{
					_putchar(44); //add comma
					_putchar(32); //add space
					_putchar(32); //add space
				}
				_putchar(z + '0'); // if not print the product
			}
		}
	_putchar('\n');
	}
}
