#ifndef holberton_h
#define holberton_h
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

typedef struct _printfs {
	char *spec;
	void (*p)(va_list);
} print_list;

int _printf(const char *format, ...);
char *_strcpy(char *dest, char *src, int a);
int _strlen(char *s);
char spec_get(const char *format, int i);
int *prog_get(char *c);
int print_string(va_list list,char *buffer, int a);
int print_char(va_list list,char *buffer, int a);

#endif
