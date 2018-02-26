#ifndef holberton_h
#define holberton_h

typedef struct _printfs {
	char *spec;
	void (*p)(va_list);
} print_list;

int _printf(const char *format, ...);
char *_strcpy(char *dest, char *src);
void *_calloc(unsigned int nmemb, unsigned int size);

#endif
