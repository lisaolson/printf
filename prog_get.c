#include "holberton.h"

char *(*prog_get(char c))(va_list)
{
        print_list prog_list[] = {
                {"s", print_string},
                {"c", print_char},
                {"d", print_int},
                {"i", print_int},
                {NULL, NULL}
        };
        int i = 0;

        while (prog_list[i].spec)
        {
                if (c == *prog_list[i].spec)
                {
                        return (prog_list[i].p);
                }
                i++;
        }
        return (NULL);
}
