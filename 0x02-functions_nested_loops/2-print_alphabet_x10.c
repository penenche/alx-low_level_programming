#include <stdio.h>
#include "main.h"

/**
 * Print_alphabet_x10 -  prints 10 times the alphabet in lowercase
 * followed by a new line
 * Return:Always 0 (Success)
 */

void Print_alphabet_x10(void)
{
	char ch;
	int i;

	i=0;
		while (i < 10)
		{
			ch = 'a';
			while (ch <= 'z')
			{
				putchar(ch);
				ch++;
			}
			putchar('\n');
			i++;
		}
}
