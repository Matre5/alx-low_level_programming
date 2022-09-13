#include "main.h"

/**
 * print_alphabet_x10
 */
void print_alphabet_x10(void)
{
	int no = 0;
	char a;

	while (no++ < 10)
	{
		for (a = 'a'; a <= 'z'; a++)
			_putchar(a);
		_putchar('\n');
	}
