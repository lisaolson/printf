#include "holberton.h"

int print_string(va_list list,char *buffer, int a)
{
        int tmp = 0;
        char *c;

        c = va_arg(list, char *);
        len = _strlen(c);
        /*char *s = malloc (len * sizeof(char) + 1);
        if (s == NULL)
                return(NULL);*/
        _strcpy(buffer, c, a);
        free(s);
        return (len);
}
