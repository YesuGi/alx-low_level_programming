#include <stdio.h>

/**
 * main - Prints the digits from 0 to 9 using putchar.
 *
 * Return: Always 0.
 */
int main(void)
{
	int digit;

	for (digit = 0; digit < 10; digit++)
	{
		putchar('0' + digit);
	}

	putchar('\n');

	return (0);
}
