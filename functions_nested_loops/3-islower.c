#include "main.h"
/**
 *_islower - entry point
 *@c: declaration
 *Return: 0, 1
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	return (1);

	else
	return (0);
}
