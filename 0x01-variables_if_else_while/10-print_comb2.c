#include <stdio.h>
/*
 *
 */

/**
 * main - prints the numbers from 00 to 99
 *
 * Return: 0 when successful
 */
int main(void)
{
	int i;
	int j;

	for (i = 48; i < 58; i++)
	{
		for (j = 48; j < 58; j++)
		{
			putchar(i);
			putchar(j);
			if (i < 58 && j < 57)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
