#include "holberton.h"
#include <stdlib.h>

int print_char(va_list list,char *buffer, int a)
{
        char *s;
        char t;

        s = malloc (2 * sizeof(char));
        if (s == NULL)
                return(0);
        t = va_arg(list, int);
        s[0] = t;
        s[1] = '\0'
        buffer[a] = s[0];
        free(s);
        return (1);
}
