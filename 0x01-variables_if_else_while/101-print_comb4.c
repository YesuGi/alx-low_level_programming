#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all possible combinations of three-digit numbers.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j, k;

	for (i = 0; i <= 7; i++)
	{
		for (j = i + 1; j <= 8; j++)
		{
			for (k = j + 1; k <= 9; k++)
			{
				printf("%d%d%d", i, j, k);

				if (i != 7 || j != 8 || k != 9)
				{
					printf(", ");
				}
			}
		}
	}

	printf("\n");

	return (0);
}
