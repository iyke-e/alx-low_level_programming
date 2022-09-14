#include "main.h"
/**
 * jack_bauer - Prints every minute of the day of Jack Bauer
 * Return: ...
 */
void jack_bauer(void)
{
	int a, b, c, d;

	for (a = 0; a <= 2; a++) // print the first possible hours of digits 0, 1, 2
	{
		for (b = 0; b <= 9; b++) // print the second digits of the hours 0 - 9
		{
			if ((a <= 1 && b <= 9) || (a <= 2 && b <= 3)) //if the hour is 19 or 23 then check for the minute
			{
				for (c = 0; c <= 5; c++) //for the minute if run the first digits 0 -5
				{
					for (d = 0; d <= 9; d++) // run to get the second digit of the minute hand 0-9
					{
						_putchar(a + '0'); //add the first digit of the hour
						_putchar(b + '0'); //add second digit of the hour
						_putchar(58); // add :
						_putchar(c + '0'); // add the first digit of the minute
						_putchar(d + '0'); // add the second digit of the minute
						_putchar('\n');
					}
				}
			}
		}
	}
}
