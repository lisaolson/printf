#include "holberton.h"
/**
 * *rot13 - scramble stuff
 * @list: input va_list
 * Return: return string count
 */

int rot13(va_list list)
{
	char *normal = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *change = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int count, count1;
	char *c;

	c = va_arg(list, char *);
	for (count = 0; c[count] != '\0'; count++)
	{
		for (count1 = 0; normal[count1] != '\0'; count1++)
		{
			if (normal[count1] == c[count])
			{
				_putchar(change[count1]);
				break;
			}
		}
		if (c[count] != normal[count1])
		{
			_putchar(c[count]);
		}
	}
	return (count);
}
