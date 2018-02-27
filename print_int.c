#include "holberton.h"

char *print_int(va_list list)
{
int a, b, res, tmp, exp, cnt;
	char *str;

	a = va_arg(list, int);
	cnt = b = 0;
	exp = 1;
	a >= 0 ? (res = a * -1) : (res = a, cnt++);
	tmp = res;
	while (tmp <= -10)
	{
		exp *= 10;
		tmp /= 10;
		cnt++;
	}
	str = malloc((cnt + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	if (a < 0)
		str[b++] = '-';
	while (exp >= 1)
	{
		str[b++] = (((res / exp) % 10) * -1 + '0');
		exp /= 10;
	}
return (str);
}
