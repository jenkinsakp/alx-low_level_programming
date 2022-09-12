#include <stdio.h>
/**
* main -Write a program that prints all possible combinations of single-digit numbers.
*
* Description: using the main function
* 
* Return: 0
*/
int main(void)
{
	int num;

	for (num = 48; num <= 57; num++)
	{
		putchar(num);
		if (num != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
