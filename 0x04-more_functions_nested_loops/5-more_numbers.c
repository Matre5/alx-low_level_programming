#include "main.h"

/**
 * more_numbers - prints more numbers
 */
void more_numbers(void)
{
	int n;
	int counter;

	for (counter = 0; counter <=9; counter++)
	{
		for (n = 0; n <= 14; n++)
		{
		   if ( n > 9)
			   _putchar((num / 10) + '0');
		   _putchar((num % 10) + '0');
		}
		_putchar('\n');
	}


}
