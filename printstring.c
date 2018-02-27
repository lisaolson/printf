#include "holberton.h"

char *print_string(va_list *list)
{
        char *c;
        c = va_arg(list, char *);
        if (c == NULL)
                return ("(null)");
        return (c);
}
