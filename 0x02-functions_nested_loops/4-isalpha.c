#include "main.h"

/**
 * _isalpha - checks for upper and lowercase
 * @c: the char to be checked 
 *
 * Return: 1 if upper case or lowercase and 0 otherwise 
 */
int _isalpha(int c)
{
		if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
			return (1);
		else
			return (0);
}
