#include <stdlib.h>
#include <stdio.h>
/**
 * _calloc - imitates calloc
 * @nmemb: number
 * @size: size of
 * Return: null or array
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *b;
	void *a;
	unsigned int cnt;

	if (size == 0)
		return (NULL);
	if (nmemb == 0)
		return (NULL);
	b = malloc(nmemb * size);
	a = b;
	if (a == NULL)
		return (NULL);
	for (cnt = 0; cnt < (nmemb * size); cnt++)
	{
		b[cnt] = 0;
	}

	return (a);
}
