#include "holberton.h"
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

int _printf(const char *format, ...)
{
	int cnt = 0, buffer_count = 0, str_cnt = 0;
	char *str = NULL;
	char buffer[BUFFER];
	char z;
	char *(*temp)(va_list);
	va_list list;

	if (format == NULL)
		return (-1);
	va_start(list, format);

	if (list == NULL)
		return (-1);
	while (format[cnt] != '\0')
	{
		if (format[cnt] == '%')
		{
			z = spec_get(format, cnt);
			temp = prog_get(z);
			str = temp(list);
			if (str == NULL)
				return (-1);
			cnt += 2;
			str_cnt = 0;
			while (str[str_cnt] != '\0')
			{
				buffer[buffer_count] = str[str_cnt];
				buffer_count++;
				str_cnt++;
			}

		}
		buffer[buffer_count] = format[cnt];
		buffer_count++;
		cnt++;
	}
	buffer[buffer_count] = '\0';
	write(1, buffer, buffer_count);
	va_end(list);
	return (buffer_count);
}
