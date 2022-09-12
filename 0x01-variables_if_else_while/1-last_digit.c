#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
if (n > 5)
printf("%d and is greater than \n", n);
	else if (n == 0)
		printf("%d and is \n", n);
	else
		printf("%d and is less than 6 and not \n", n);
	return (0);
}
