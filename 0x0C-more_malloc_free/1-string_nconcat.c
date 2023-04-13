#include "main.h"
/**
 * string_nconcat - function that creates an array of chars,
 *  and initializes it with a specific char
 * @s1: first bytes of the memory
 * @s2: first bytes of the memory
 * @n: first bytes of the memory
 * Return: pointer to the resulting string dests
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i;
	char *copy;
	int size1 = 0;
	int size2 = 0;
	(void)n;

	while (s1 != NULL && s1[size1])
	{
		size1++;
	}
	while (s2 != NULL && s2[size2])
	{
		size2++;
	}
	copy = malloc(size1 + size2 + 1);
	if (!copy)
	{
		return (NULL);
	}
	size2 = size2 - (size2 - n);
	for (i = 0; i < size1 + size2; i++)
	{
		if (i < size1)
		{
			copy[i] = s1[i];
		}
		else
		{
			copy[i] = s2[i - size1];
		}
	}
	return (copy);
}
