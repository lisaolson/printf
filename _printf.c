#include "holberton.h"
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

int _printf(const char *format, ...)
{
	int cnt = 0, buffer_count = 0, str_len = 0;
	char c;
	char *str;
	char *buffer = malloc(1024 * sizeof(char));

	va_list list;

	va_start(list, format);

	while (format[cnt] != '\0')
	{
		if (format[cnt] == '%')
		{
			c = spec_get(format, cnt);
			if (c != 0)
			{
				str = prog_get(c);
				if (str != NULL)
				{
					str_len = str(list, buffer, buffer_count);
					buffer_count += str_len;
					cnt += 2;
				}

		}
		buffer[buffer_count] = format[cnt];
		buffer_count++;
		cnt++;
	}
	write(1, buffer, buffer_count);
	va_end(list);
	return (0);
	}
}
