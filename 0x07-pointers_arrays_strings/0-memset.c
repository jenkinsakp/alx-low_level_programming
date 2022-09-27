#include "main.h"

/**
  * _memset - Fill memory with a constant byte
  * @s: memory  to blocked
  * @b: char to fill
  * @n: bytes of memory area to fill
  *
  * Return: the pointer to the  area block
  */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int akp;

	for (a = 0; akp < n; akp++)
	{
		s[akp] = b;
	}

	return (s);
}


