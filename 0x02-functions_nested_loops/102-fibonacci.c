#include <stdio.h>

/**
 * main - prints sum of even-valued fibonacci numbers under 4,000,000
 * Return: 0 if succesfull
 */

int main(void)
{
    long int i, a, b, temp;

    a = 1;
    b = 2;

    printf("%ld, %ld, ", a, b);

    for (i = 0; i < 46; i++) {
        temp = a + b;
        printf("%ld", temp);

        if (i != 45)
            printf(", ");

        a = b;
        b = temp;
    }

    printf("\n");

    return 0;
}
