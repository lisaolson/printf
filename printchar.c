#include "holberton.h"
#include <stdlib.h>
/**
 * print_char - returns a string char
 * @list: inputs valist
 * Return: string with character
 */

int print_char(va_list list)
{
	char ch;

	ch = va_arg(list, int);
	_putchar(ch);

        return (1);
}
