#include "holberton.h"

char *spec_get(const char *format, int i)
{
        int cnt = 0;
        char x;
        char *tmp;

        tmp = malloc(sizeof(char) * 2);
        if (tmp = NULL || format == NULL)
                return (NULL);
        for (cnt = 0; format[i + cnt] != '\0'; cnt++)
        {
                if (format[i + cnt] <= 'z' && format[i + cnt] >= 'a')
                {
                        x = format[i + cnt];
                        tmp[0] = x;
                        tmp[1] = '\0';
                        return (tmp);
                }
        }
}
