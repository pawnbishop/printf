#include "main.h"
#include <string.h>
#include <stdio.h>
#include <stdarg.h>
/**
 *_printf - a function constant of type char similar to printf
 * @format:this serves as a formating str
 *
 * Return: a char number is printed
 */

int _printf(const char *format, ...)
{
        combine my_formats[] = {
                {"%c", print_char},
                {"%%", _percent},
                {"%s", printf_string},
                {"%d", percent_D},
                {"%i", percent_I},
                
        };
         int count = 0;
         int loop = 0;
         int j = 4;
         va_list args;


        va_start(args, format);

        if (format == NULL || (format[0] == '%' && format[1] == '\0'))
                return (-1);
Here:
        while (format[loop] != '\0')
        {
        while (j >= 0)
        {
                if (m[j].id[0] == format[loop] && m[j].id[1] == format[loop + 1])
                {
                        printed_chars = printed_chars + m[j].f(args);
                        loop = loop + 2;
                        goto Here;
                }
                j--;
        }
        _putchar(format[loop]);
        loop++;
         printed_chars++;
        }
        va_end(args);
        return (printed_chars);
}
