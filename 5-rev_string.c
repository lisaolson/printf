#include "holberton.h"
/**
 * rev_string - reverses the string
 * @list: input va_list
 * Return: total number of string length
 */

int rev_string(va_list list)
{
	int cnt = 0;
	char *s;

	s = va_arg(list, char *);

	for (cnt = 0; s[cnt] != '\0'; cnt++)
	{
		;
	}
	cnt = cnt - 1;

	for (; cnt >= 0; cnt--)
	{
		_putchar(s[cnt]);
	}

	return (cnt);
}
