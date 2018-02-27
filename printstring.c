#include "holberton.h"
/**
 * print_string - return string
 * @list: input va_list
 * Return: return string
 */

char *print_string(va_list *list)
{
	char *c;

	c = va_arg(list, char *);
	if (c == NULL)
		return ("(null)");
	return (c);
}
