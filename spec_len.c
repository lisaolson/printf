#include "holberton.h"

int spec_len(const char *format, int i)
{
        int cnt;
        for (cnt = 1; format[i + cnt] != " "; cnt++)
        {
                ;
        }
        return (cnt - 1);
}
