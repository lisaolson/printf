#ifndef holberton_h
#define holberton_h

typedef struct _printfs {
	char *spec;
	void (*p)(va_list);
} print_list;

int _printf(const char *format, ...);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);
int spec_get(char *format, int i);
int (*prog_get(char *c))(va_list, char *, int);
int print_string(va_list list, *buffer, int a);
int print_char(va_list list, *buffer, int a);

#endif
