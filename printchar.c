#include "holberton.h"
#include <stdlib.h>
/**
 * print_char - returns a string char
 * @list: inputs valist
 * Return: string with character
 */

char *print_char(va_list list)
{
	char s[2];
	char *p;

	p = s;
	s[0] = va_arg(list, int);
	s[1] = '\0';
	return (p);
}
