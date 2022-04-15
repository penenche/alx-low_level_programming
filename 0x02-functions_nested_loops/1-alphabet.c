#include <stdio.h>

/**
 * print_alphabet - prints the alphabet in lowercase
 */
void print_alphabet( )
{
	char ch;

	ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
}
