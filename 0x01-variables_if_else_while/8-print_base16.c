#include <stdio.h>

/**
 * main - Prints the digits from 0 to 9 followed by the lowercase letters from a to f.
 *
 * Return: Always 0.
 */
int main(void)
{
	char digit;

	for (digit = '0'; digit <= '9'; digit++)
		putchar(digit);

	for (digit = 'a'; digit <= 'f'; digit++)
		putchar(digit);

	putchar('\n');

	return 0;
}
