#include "holberton.h"
/**
* print_binary - prints binary
* @list: input va_list
* Return: length of number
*/
int print_binary(va_list list)
{
	int count = 0, cnt;
	int *hold = 0;
	unsigned int num = va_arg(list, unsigned int);
	unsigned int temp = num;

	if (num == 0)
	{
		_putchar(0 + '0');
		return (1);
	}
	while (num / 2 != 0)
	{
		num /= 2;
		count++;
	};
	count++;
	hold = malloc(count * sizeof(unsigned int));

	for (cnt = 0; cnt < count; cnt++)
	{
		hold[cnt] = temp % 2;
		temp /= 2;
	}
	for (cnt = count - 1; cnt >= 0; cnt--)
	{
		_putchar(hold[cnt] + '0');
	}
	free(hold);
	return (count);
}
