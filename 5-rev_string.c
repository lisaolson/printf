#include "holberton.h"
/**
 * rev_string - reverses the string
 * @list: input va_list
 * Return: total number of string length
 */

int rev_string(va_list list)
{
	int cnt, a;
	char *s;

	s = va_arg(list, char *);
	cnt = 0;
	a = 0;
	while (s[cnt] != '\0')
	{
		cnt++;
		a++;
	}
	cnt = cnt - 1;

	while (cnt >= 0)
	{
		_putchar(s[cnt]);
		cnt--;
	}

	return (a);
}
