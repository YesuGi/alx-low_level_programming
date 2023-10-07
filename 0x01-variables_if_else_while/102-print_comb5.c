#include <stdio.h>

int main(void)
{
    int i, j;
    int firstDigit1, secondDigit1;
    int firstDigit2, secondDigit2;

    for (i = 0; i <= 99; i++)
    {
        firstDigit1 = i / 10;
        secondDigit1 = i % 10;

        for (j = i; j <= 99; j++)
        {
            firstDigit2 = j / 10;
            secondDigit2 = j % 10;

            putchar(firstDigit1 / 10 + '0');
            putchar(firstDigit1 % 10 + '0');
            putchar(secondDigit1 / 10 + '0');
            putchar(secondDigit1 % 10 + '0');
            putchar(' ');

            putchar(firstDigit2 / 10 + '0');
            putchar(firstDigit2 % 10 + '0');
            putchar(secondDigit2 / 10 + '0');
            putchar(secondDigit2 % 10 + '0');
            if (i != 99 || j != 99)
            {
                putchar(',');
                putchar(' ');
            }
        }
    }

    putchar('\n');

    return 0;
}
