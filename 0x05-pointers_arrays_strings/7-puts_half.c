#include <stdio.h>
#include "main.h"

/**
 * string - printing
 *
 * Return: nothing
 */

void puts_half(char *str)
{
	int i, n = _strn(str);

	for (i = ((n - 1) / 2) + 1; i < n; i++)
		putchar(*(str + i));
	putchar(10);
}

/**
* _strlen - returns the length of a string
* @s: string
*
* Return: the length of the given string
*/

int _strlen(char *s)
{
	int n = 0;

	while (*(s + n) != '\0')
		n++;

	return (n);
}
