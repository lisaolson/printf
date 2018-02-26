#include "holberton.h"

int *(*prog_get(char c))(char)
{
        print_list prog_list[] = {
                {"s", print_string},
                {"c", print_char},
                {NULL, NULL}
        };
        int i = 0;

        while (prog_list[i].spec != NULL)
        {
                if (c == prog_list[i].spec[0])
                {
                        return (prog_list[i].p);
                }
                i++;
        }
        return (NULL);
}
