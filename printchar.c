#include "holberton.h"
#include <stdlib.h>

int print_char(va_list list,char *buffer, int a)
{
        int tmp = 0;

        char *s = malloc (2 * sizeof(char));
        if (s == NULL)
                return(NULL);
        s = va_arg(list, int);
        buffer[a] = s[0];
        free(s);
        return (1);
}
