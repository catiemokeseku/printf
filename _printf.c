#include "main.h"

/**
* _printf - function
*
* Description: returns the number of characters printed
*
* @format: string input
*
* Returns: int
*/

int _printf(const char *format, ...)
{
    int i = 0;
    int n = 0;
    va_list a;

    va_start(a, format);

    while (format && format[i])
    {
        if (format[i] != '%')
        {
            n += _putchar(format[i]);
        }
        else if (format[i+1])
        {
            i++;
            if (format[i] == 'c')
            {
                n += _putchar(va_arg(a, int));
            }
            else if (format[i] == 's')
            {
                n += print_string(va_arg(a, char *));
            }
        }
    }
}