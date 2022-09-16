#include "main.h"

/**
 * main - prints numbers multiple of 5 buzz, multiple of 3 fizz them multiple of both fizzbuzz
 * Return: Always 0
 */
int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if ((num % 3) == 0 && (num % 5) == 0)
			printf("FizzBuzz");

		else if ((num % 3) == 0)
			printf("Fizz");

		else if ((num % 5) == 0)
			printf("Buzz");
		
		else 
			printf("%d", num);

		if (num == 100)
			continue;
		printf(" ");
	}
	printf("\n");

	return (0);
}
