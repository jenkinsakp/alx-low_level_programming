#include <stdio.h>
/**
* main - print only when the number is (+) postive, (0) zero, or  (-) negative
*
* Description: using the main function
* this program prints "Programming is positive, zero, or negative
* Return: 0
*/
int main(void)
{
char apha;
for (apha = 'a' ; apha <= 'z' ; apha++)
{
if (apha != 'e' && apha != 'q')
{
	putchar(apha);
}
}
putchar('\n');
return (0);
}
