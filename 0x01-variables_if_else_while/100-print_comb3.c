#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 * Return:Always 0 (Success)
 */

int main(void)

{
	int x, y;

	for (x = 48; x <= 57; y++)
	{
		putchar(x);
		putchar(y);
		if (x != 57 || y != 57)
		{
			putchar(',');
				putchar(' ');
		}
	}

putchar('\n');
return (0);
}
