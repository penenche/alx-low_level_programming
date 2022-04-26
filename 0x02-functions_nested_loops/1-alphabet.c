#include <stdio.h>

/**
 * Print_alphabet- prints the alphabet in lowercase
 */
void Print_alphabet(void)
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
