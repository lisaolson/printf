#include "holberton.h"
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

int _printf(const char *format, ...)
{
	int cnt = 0, total = 0, spaces = 0;
	char z;
	va_list list;

	if (format == NULL)
	{
		return (-1);
	}
	va_start(list, format);
	while (format[cnt] != '\0')
	{
		if (format[cnt] == '%' && format[cnt + 1] == '\0')
			return (-1);
		else if (format[cnt] == '%' && format[cnt + 1] == '%')
		{
			_putchar(format[cnt + 1]);
			total++;
			cnt += 2;
		}
		else if (format[cnt] == '%')
		{
			z = spec_get(format, cnt);
			total = prog_get(z, list);
			if (total == 0)
			{
				_putchar(format[cnt]);
				_putchar(format[cnt + 1]);
			}
			spaces = count_spaces(format, cnt);
			cnt += (spaces + 2);
			total += total;
		}
		else
		{
			_putchar(format[cnt]);
			cnt++;
			total++;
		}

	}
	va_end(list);
	return (cnt);
}
