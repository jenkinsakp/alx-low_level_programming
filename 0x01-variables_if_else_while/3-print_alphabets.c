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
char leter;
for (leter = 'a' ; leter <= 'z' ; leter++)
{
	putchar(leter);
}
for (leter = 'A' ; leter <= 'Z' ; leter++)
{
	putchar(leter);
}
putchar('\n');
return (0);
}
