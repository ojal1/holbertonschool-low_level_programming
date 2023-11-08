#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *array_range - array of integers
 *@min: minimum of integers
 *@max: maximum of integers
 *Return: ptr
 */
int *array_range(int min, int max)
{
	int *ptr;
	int i;

	if (min > max)
	{
		return (NULL);
	}

	ptr = malloc((max - min + 1) * sizeof(int));

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; min < max; i++)
	{
		ptr[i] = min;
		min++;
	}

	return (ptr);
}
