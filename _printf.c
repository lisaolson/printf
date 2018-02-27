#include "holberton.h"
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

int _printf(const char *format, ...)
{
	int cnt = 0, buffer_count = 0, str_cnt = 0;
	char *c = NULL;
	char *str = NULL;
	char buffer[BUFFER];
	va_list list;

	if (format == NULL)
	{
		return (-1);
	}
	va_start(list, format);
	while (format[cnt] != '\0')
	{
		if (format[cnt] == '%')
		{
			c = spec_get(format, cnt);
			if (c != NULL)
			{
				str = (*prog_get(c))(list);
				if (str != NULL)
				{
					cnt += 2;
					while (str[str_cnt] != '\0')
					{
						buffer[buffer_count] = str[str_cnt];
						buffer_count++;
						str_cnt++;
					}
				}
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
