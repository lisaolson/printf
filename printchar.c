#include "holberton.h"
#include <stdlib.h>

char *print_char(va_list list)
{
        char s[2];

        s[0] = va_arg(list, int);
        s[1] = '\0';
        return (s);
}
