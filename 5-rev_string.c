#include "holberton.h"
/**
 * rev_string - reverses the string
 * @list: input va_list
 * Return: total number of string length
 */

int rev_string(va_list list)
{
	int count = 0, rev = 0, counter = 0, cnt = 0;
	char tmp, tmp2;
	char *s, *tmp3;

	s = va_arg(list, char *);
	for (count = 0; s[count] != '\0'; count++)
		;
	tmp3 = malloc(sizeof(char) * count);

	for (cnt = 0; cnt < count; cnt++)
	{
		tmp3[cnt] = s[cnt];
	}
	count = count - 1;
	counter = count;

	for (rev = 0; rev < count; rev++)
	{
		tmp2 = tmp3[rev];
		tmp = tmp3[count];
		tmp3[count] = tmp2;
		tmp3[rev] = tmp;
		count--;
	}

	for (cnt = 0; tmp3[cnt] != '\0'; cnt++)
	{
		_putchar(tmp3[cnt]);
	}
	free(tmp3);
	return (counter);
}
