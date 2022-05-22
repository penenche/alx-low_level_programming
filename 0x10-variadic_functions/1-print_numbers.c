#include "variadic_functions.h"

#include <stdio.h>

#include <stdarg.h>

/**
 * print_numbers - Prints numbers, followed by a new line.
 * @separator: The string to be printed between numbers.
 * @n: The number of integers passed to the function.
 * @...: A variable number of numbers to be printed.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list;

	va_start(list, n);
	
	for (i = 0; i < n; i++)
	{
		if(!separator)
			printf("%d", va_arg(list, int));
		else if (sepatator && i == 0)
			printf("%d", va_arg(list, int));
		else
			printf("%sd", separator, va_arg(list, int));
	}
	va_end(list);

	printf("\n");
}
