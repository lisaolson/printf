#include "holberton.h"

int _printf(const char *format, ...)
{
	int cnt = 0, buffer_count = 0, str_cnt = 0, specs_len = 0;
	char *c;
	char *str;
	char *buffer = malloc(1024 * sizeof(char));
	va_list list;

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
					specs_len = spec_len(format, cnt);
					cnt += specs_len;
					while (str[str_cnt] != '\0')
					{
						buffer[buffer_count] = str[str_cnt];
						buffer_count++;
						str_cnt++;
					}
				}
			}
		}
		if (c == NULL || str == NULL)
			return(-1);
		buffer[buffer_count] = format[cnt];
		buffer_count++;
		cnt++;
	}
buffer[buffer_count] = '\0';
write(1, buffer, buffer_count);
va_end(list);
return (buffer_count);
}
