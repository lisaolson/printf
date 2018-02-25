#ifndef holberton_h
#define holberton_h

typedef struct _printfs {
	char *spec;
	void (*p)(va_list);
} print_list;

int _printf(const char *format, ...);

#endif
