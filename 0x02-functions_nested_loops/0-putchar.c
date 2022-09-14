#include <unistd.h>
#include "main.h"
/**
 * writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int main(void)
{
	char akp[8] = "_putchar";
	int count  = 0;
	char checker;

		while (count <= 8) 
		{
			checker = akp[count];
			_putchar(checker);
			count++;
		}
	_putchar('\n');
	return (0);

}

int _putchar(char c)
{
  return (write(1, &c, 1));
}
