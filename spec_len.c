#include "holberton.h"

int spec_len(const char *format, int i)
{
        int cnt = 0;
        for (cnt = 0; format[i + cnt] != '\0'; cnt++)
        {
                if (format[i + cnt] <= 'z' && format[i + cnt] >= 'a')
                {
                        ;
                }
        }
        return (cnt);
}
