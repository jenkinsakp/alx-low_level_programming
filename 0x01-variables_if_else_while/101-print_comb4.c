#include <stdio.h>
/**
 * main - prints out all different combinations of 3 digits numbers
 * Return: 0
 */
int main(void)
{
	int num1 = 0;
	int num2;
	int num3;
	int num4;

	while (num1 <= 999)
	{
		num2 = (num1 / 100 + '0');
		num3 = (num1 / 10 % 10 + '0');
		num4 = (num1 % 10 + '0');

		if ((num2 < num3) && (num3 < num4))
		{
			putchar(num3);
			putchar(num2);
			putchar(num4);

			if (num1 != 789)
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
