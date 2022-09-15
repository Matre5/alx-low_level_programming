#include "main.h"

/**
 * more_numbers - prints more numbers
 */
void more_numbers(void)
{
	int n = 0;
	int counter;

	while (n++ <10)
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
