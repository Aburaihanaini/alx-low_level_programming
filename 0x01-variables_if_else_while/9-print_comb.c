#include <stdio.h>
/**
 * main - entry point
 *
 * Return: Alway return 0
 *
 */
int main(void)
{
	int i;

	for (i = 10; i < 20 ; >++)
	{
		putchar((i % 19) + '0');
		if (i !=19)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
