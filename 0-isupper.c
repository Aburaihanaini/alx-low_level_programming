#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * return: Always 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
