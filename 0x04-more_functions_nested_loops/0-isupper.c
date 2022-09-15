#include "main.h"

/**
 *_isupper - finds out if the letter is in uppercase 
 *
 *Return: Always 1 if upper then 0 if not
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
