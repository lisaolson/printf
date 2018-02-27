#include "holberton.h"

int spec_len(const char *format, int i)
{
        int cnt;
        char *space;

        space = " ";
        for (cnt = 1; format[i + cnt] != space[0]; cnt++)
                ;
        return (cnt - 1);
}
