#include "holberton.h"
#include <stdlib.h>

char print_char(va_list list)
{
        char *s;
        char t;

        s = malloc(2 * sizeof(char));
        if (s == NULL)
                return (0);

        t = va_arg(list, int);
        s[0] = t;
        s[1] = '\0';
        return (s);
}
