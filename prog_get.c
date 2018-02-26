#include "holberton.h"

char *prog_get(char *c)
{
        print_list prog_list[] = {
                {"s", print_string},
                {"c", print_char}
                {NULL, NULL}
        };
        int i = 0;

        while (prog_list[i].spec != NULL)
        {
                if (c[0] == prog_list.spec[0])
                {
                        return (prog_list.p);
                }
                i++;
        }
        return (NULL);
}
