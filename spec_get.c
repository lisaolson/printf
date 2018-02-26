#include "holberton.h"

char spec_get(const char *format, int i)
{
        int cnt = 0;
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
