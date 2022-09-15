#include "main.h"

/**
 * _isdigit - checks if the number is a digit 
 *@c: number to be checked
 *
 * Return: 1 if its a number and 0 if it is not a number
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
