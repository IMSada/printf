#include "main.h"

/**
 * _strlen - Returns the length of a string.
 * @s: Type char pointer
 * Return: i.
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != 0; i++)
		;
	return (i);
}
/**
 * _strlenc - strlen function but applied for constant char pointer s
 * @s: Type char pointer
 * Return: c
 */
int _strlenchar(const char *s)
{
	int i;

	for (i = 0; s[i] != 0; i++)
		;
	return (i);
}
