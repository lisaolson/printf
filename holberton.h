#ifndef holberton_h
#define holberton_h
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#define BUFFER 1024

/**
 * struct _printfs - structure for print_list
 * @spec: character pointer
 * @p: function pointer
*/
typedef struct _printfs
{
	char *spec;
	int (*p)();
} print_list;

int _putchar(char c);
int _printf(const char *format, ...);
char spec_get(const char *format, int i);
int prog_get(char c, va_list list, const char *format, int cnt);
int print_string(va_list *list);
int print_binary(va_list list);
int rev_string(va_list list);
int count_spaces(const char *format, int index);
int print_int(va_list list);
int print_char(va_list list);

#endif
