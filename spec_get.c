#include "holberton.h"

int spec_get(char *format, int i)
{
        char x;
        for (cnt = 0; format[i + cnt] != '\0'; cnt++)
        {
                if (format[i + cnt] <= 'z' && format[i + cnt] >= 'a')
                {
                        x = format[i + cnt];
                        return (x);
                }
        }
        return (0);
}