#include "holberton.h"
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

int _printf(const char *format, ...)
{
	int cnt = 0;
	char *s;
	buffer = malloc(1024 * sizeof(char));

	va_list list;

	print_list prog_list[] = {
		{"s", print_string},
		{"c", print_char}
	};

	va_start(list, format);

	while (format[cnt] != '\0')
	{
		if (format[cnt] == '%')
		{
			switch () {
				case /* value */:
			}
		}

		buffer[buffer_count] = format[cnt];
	}




	write(1, buffer, cnt);
	va_end(list);
}
