#include <stdio.h>

int main(void)
{
    for (int i = 0; i <= 99; i++)
    {
        int firstDigit1 = i / 10;
        int secondDigit1 = i % 10;

        for (int j = i; j <= 99; j++)
        {
            int firstDigit2 = j / 10;
            int secondDigit2 = j % 10;

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
