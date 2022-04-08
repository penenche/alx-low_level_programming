#include <stdio.h>
/**
 * main -prints the size of vatious types
 * on the computer it is compiled and run on
 * Return:Always 0 (Success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

	printf("Size of a char: %ld byte(s)\n", (long unsigned)sizeof(a));
	printf("Size of an int: %ld byte(s)\n", (long unsigned)sizeof(b));
	printf("Size of a long int: %ld byte(s)\n", (long unsigned)sizeof(c));
	printf("Size of a long long int: %ld byte(s)\n", (long unsigned)sizeof(d));
	printf("Size of a float: %ld byte(s)\n", (long unsigned)sizeof(f));
	return (0);
}
