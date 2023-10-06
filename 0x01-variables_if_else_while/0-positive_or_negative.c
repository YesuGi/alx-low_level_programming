#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point of the program
 *
 * Return: 0 (Success)
 */
int main(void)
{
    int n;
    
    srand(time(NULL));
    n = rand() % 201 - 100;

    if (n >= 0)
    {
        printf("%02d is positive\n", n);
    }
    else if (n==0)
    {
        printf("%02d is zero\n", 0);
    }
    else
    {
        printf("%02d is negative\n", -n);
    }

    return 0;
}
