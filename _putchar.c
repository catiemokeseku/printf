#include <unistd.h>

/**
 * _putchar - function
 *
 * Description: print a character
 *
 * @c: character to print
 *
 *Returns: int
 */

int _putchar(char c)
{
    write(1, &c, 1);
    return (1);
}