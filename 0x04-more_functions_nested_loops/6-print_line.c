#include "main.h"

/**
 * print_line - prints a mine depending in the length og words
 * @n: number to be inputed
 */
void print_line(int n)
{
	int l;

	if (n > 0)
	{
		for (len = 0; len < n; len++)
			_putchar('_');
	}

	_putchar ('\n');
}
