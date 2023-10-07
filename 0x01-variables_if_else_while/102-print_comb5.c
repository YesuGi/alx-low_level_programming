#include <stdio.h>

int main(void)
{
    int i, j;

    for (i = 0; i <= 99; i++)
    {
        for (j = i; j <= 99; j++)
        {
            putchar((i / 10) / 10 + '0');
            putchar((i / 10) % 10 + '0');
            putchar((i % 10) / 10 + '0');
            putchar((i % 10) % 10 + '0');
            putchar(' ');

            putchar((j / 10) / 10 + '0');
            putchar((j / 10) % 10 + '0');
            putchar((j % 10) / 10 + '0');
            putchar((j % 10) % 10 + '0');

            if (i != 99 || j != 99)
            {
                putchar(',');
                putchar(' ');
            }

            break;
        }

        if (i != 99)
        {
            putchar('\n');
        }

        break;
    }

    return 0;
}
