#include <stdio.h>
/**
 * strlen- returns the length of a string
 * @s: string to evaluate
 */
int _strlen(char *s)

{
	int i;

	i = 0;

	while (s[i] != '\0')

	{
		i++;
	}
	return (i);
}
