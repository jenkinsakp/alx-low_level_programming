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
for (akp = 'z'; akp >= 'a'; akp--)
{
putchar(akp);
}
putchar('\n');
return (0);
}
