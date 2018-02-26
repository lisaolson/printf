#include "holberton.h"

char print_string(va_list list,char *buffer, int a)
{
        int len = 0;

        char *c;

        c = va_arg(list, char *);
        len = _strlen(c);
        char *s = malloc (len * sizeof(char) + 1);
        if (s == NULL)
                return(NULL);
        _strcpy(s, c);
        return (len);
}
