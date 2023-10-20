#include "main.h"
#include <unistd.h>

/**
 * _putchar - will print
 * @c: this becomes the char to be printed
 * 
 * Return: 1,
 */

int _putchar(char c)
{
	return(write(1, &c, 1));
}
