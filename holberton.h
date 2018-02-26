#ifndef holberton_h
#define holberton_h
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

typedef struct _printfs {
	char *spec;
	void (*p)(va_list);
} print_list;

int _printf(const char *format, ...);
char *_strcpy(char *dest, char *src, int a);
int _strlen(char *s);
char spec_get(const char *format, int i);
char *(*prog_get(char c))(va_list);
char print_string(va_list list);
char print_char(va_list list);

#endif
