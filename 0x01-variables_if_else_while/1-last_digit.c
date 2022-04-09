#include <stdlib.h>

#include <time.h>

#include <stdio.h>

/**
 * main -prints a random number to the variable n
 * each time it is executed
 * Return:Always 0 (Success)
*/

int main(void)

{
	int n;
	int last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_digit = 8;
	if (last_digit == 0)
	{
		printf("Last digit of %d is 0 and is 0\n", n);
	}
	else
		if (last_digit > 5)
		{
			printf("Last digit of %d is %d and is greater than 5\n", n, last_digit);
		}
		else
			{
				printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last_digit);
			}
	
	return (0);

}
