#include "holberton.h"
/**
 * rev_string - reverses the string
 * @s: input string
 */

void rev_string(va_list list)
{
	int count = 0, rev = 0, counter = 0;
	char tmp, tmp2;
	char *s;

	s = va_arg(list, char *);
	for (count = 0; s[count] != '\0'; count++)
		;
	count = count - 1;
	counter = count;
	
	for (rev = 0; rev < count; rev++)
	{
		tmp2 = s[rev];
		tmp = s[count];
		s[count] = tmp2;
		s[rev] = tmp;
		_putchar(s[rev]);
		count--;
	}
	return (counter);
}
