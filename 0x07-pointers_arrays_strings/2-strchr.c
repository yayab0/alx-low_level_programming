#include "main.h"

/**
 * _strchr - fills memory with a constant byte.
 * @s: first bytes of the memory
 * @c: constant byte b
 * Return: Null when not found
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		printf("%s", s[i]);
		printf("%s\n", s[i + 1]);
		if (s[i] == c)
		{
			s = (s + i);
		}
		else if (s[i + 1] == '\0')
		{
			return (NULL);
		}
	}
	return (s);
}
