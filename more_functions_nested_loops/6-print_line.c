#include "main.h"
/**
*print_line - Prints numbers from 0 - 9
*
*@n: Number of lines to make
*/
void print_line(int n)
{
	int i;

	if (n == 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
		_putchar('_');
		}
	_putchar('\n');
	}
}
