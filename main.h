#ifndef _MAIN_H
#define _MAIN_H
#include <stddef.h>
#include <stdarg.h>

/**
 * struct format - represents a format function
 * @id: format specifies 
 * @f: pointer to format specifiers
 *
 */

typedef struct format
{
    char *id;
    int (*f)();
} combine;

int _putchar(char c);
int print_char(va_list val);
int _string(char *str);
int printf_string(va_list val)
int _percent(void)
int percent_D(va_list args)
int percent_I(va_list args)

#endif
