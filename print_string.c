#include "main.h"
#include <stdio.h>

/**
 * printf_string - printing function
 * @val: inspection arguement
 *
 * Return: length
 */

int printf_string(va_list val)
{
	int lenght;
	int loop;
	char *str;

	str = va_arg(val, char *);
	
	if (str==NULL)
	{
		str = "(NULL)"
	}
	lenght = _string(str);

	for (loop=0; loop < lenght; loop++)
	{
		_putchar(str[loop]);
	}
	return (lenght);
}
