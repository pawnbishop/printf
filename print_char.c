#include "main.h"
#include <stdarg>
#include <stdio.h>

/**
 * print_char - this prints a char
 * @val: argument to representing a char
 *
 * Return: 1
 */

int print_char(va_list val)
{
	char firstChar;

	firstChar = val_arg(val, int);
	_putchar(firstChar);

	return(1);
}
