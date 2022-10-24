#include "main.h"
#include <stdio.h>

/**
 * swap_int - swap int
 *
 * @a: first interger
 * @b: second interger
 */
void swap_int(int *a, int *b);
{
	int c = *a;
	int d = *b;
	*a = d;
	*b = c;
}
