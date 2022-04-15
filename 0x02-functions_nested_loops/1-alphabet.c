#include <stdio.h>

/**
 * main - print_alphabet prints the alphabet in lowercase
 */
void main(void)
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
