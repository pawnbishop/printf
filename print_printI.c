#include "main.h"
#include <stdio.h>

/**
 * percent_I - prints an interger value
 * @args: arguments
 *
 * Return: 1
 */

int percent_I(va_list args)
{
        int number;
        int loop;
        int count;
        char num_str[12];

        count = 0;
        number = va_arg(args int);
        snprintf(num_str, sizeof(num_str), "%i", number);

        for (loop = 0; num_str[loop] != '\0'; loop++)
        {
                _putchar(num_str[loop]);
                count++;
        }
        return (count);
}
