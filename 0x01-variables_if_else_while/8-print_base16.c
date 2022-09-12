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
char akp;
for (akp = '0'; akp <= '9'; akp++)
{
	putchar(akp);
}
for (akp = 'a'; akp <= 'f'; akp++)
{
	putchar(akp);
}
putchar('\n');
return (0);
}
