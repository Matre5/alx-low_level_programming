#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int h;
	char s;

	for (h = 48; h < 58; h++)
	{
		putchar(h);
	}
	for (s = 'a'; s <= 'f'; s++)
	{
		putchar(s);
	}
	putchar('\n');
	return(0);
}
