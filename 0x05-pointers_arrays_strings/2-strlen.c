#include <stdio.h>
/**
 * strlen- returns the length of a string
 * @s: string to evaluate
 * Return: Always 0
 */
int_strlen(char *s)
{
	int i;
	i = 0;

	while (s[i]!='\0')
	{
		i++;
	}
	return (i);
}
