#include <stdio.h>
/**
 * main - prints out all different combinations of 2 digits numbers
 * Return: 0
 */
int main(void)
{
	int num1 = 0;
	int num2;
	int num3;

	while (num1 <= 99)
	{
		num2 = (num1 / 10 + '0');
		num3 = (num1 % 10 + '0');

		if (num2 < num3)
		{
			putchar(num2);
			putchar(num3);

			if (num1 != 89)
			{
				putchar(',');
				putchar(' ');
			}
		}
		num1++;
	}
putchar('\n');
return (0);
}
