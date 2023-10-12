#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 * @c: the character to print
 * Return: 0  on success 1.
 * on error , -1 is returende, and errno is set approptiately
 */
int _putchar(char c)
{
        return (write(1, &c, 1));
}
