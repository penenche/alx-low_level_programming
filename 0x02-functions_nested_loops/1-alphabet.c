#include <stdio.h>

/**
 * print_alphabet - in lowercase
 * followed by a new line
 * Return:Always 0 (Success)
 */
char main(void)
{
	char ch;

	ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
