#include "holberton.h"

char *print_string(va_list list)
{
        int len = 0;

        char *c;
        char *s;

        c = va_arg(list, char *);
        len = _strlen(c);
        s = malloc (len * sizeof(char) + 1);
        if (s == NULL)
                return(NULL);
        _strcpy(s, c);
        return (s);
}
