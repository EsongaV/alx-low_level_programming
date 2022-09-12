#include <stdio.h>
/**
 * main - printing numbers from 0-9 with commas and space between them
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int a;

	for (a = 48; a <= 57; a++);
	{
		putchar(a);
		if (a != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
