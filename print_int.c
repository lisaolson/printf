#include "holberton.h"

char *print_int(va_list list)
{
  int hold = 0, y = 1, cnt = 0;
  unsigned int power = 0, num_len = 0;
  unsigned int last = 0, number = 0, negative = n, negative2 = 0;
  char *temp = NULL;

  hold = va_arg(list, int);

  while (hold > 9 || hold < -9)
  {
          num /= 10;
          num_len++;
  }

  temp = malloc(num_len * sizeof(char) + 1);

  if (n < 0)
  {
          tmp[0] = '-';
          negative = -1 * n;
          cnt++;
  }

  negative2 = negative / 10;
  while ((negative2 % y) != negative2)
  {
          y = y * 10;
          power++;
  }
  negative2 = negative2 * 10;
  while (power >= 1)
  {
          number = negative2 / y;
          temp[cnt] = (number % 10 + '0');
          power--;
          y = y / 10;
          cnt++;
  }
  cnt++;
  last = negative % 10;
  temp[cnt] = (last + '0');
  cnt++;
  temp[cnt] = '\0';
  return (temp);
}
