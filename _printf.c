#include "holberton.h"
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

int _printf(const char *format, ...)
{
	int cnt = 0, cnt2 = 0, tmp = 0, buffer_count = 0, cnt = 0, str_len = 0;
	char *s, *c, *str;
	char *buffer = malloc(1024 * sizeof(char));

	va_list list;

	va_start(list, format);

	while (format[cnt] != '\0')
	{
		if (format[cnt] == '%')
		{
			c = spec_get(format, cnt);
			if (c == 0)
				break;
/*get rid of break and set conditional to not equal to and add the rest underneath inside the if*/
			str = prog_get(c);
			if (str == NULL)
				break;
/*get rid of break and set conditional to not equal to and add the rest underneath inside the if*/
			str_len = prog_get(list, buffer, buffer_count)
			buffer_count += str_len;
			cnt += 2;

		}
		buffer[buffer_count] = format[cnt];
		buffer_count++;
		cnt++;
	}
	write(1, buffer, buffer_count);
	va_end(list);
}
