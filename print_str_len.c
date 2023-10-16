#include "main.h"
/**
 * _strlen - a function that return the len of a str.
 * @s: char pointer
 * Return: c.
 */
int _strlen(char *s)
{
	int c;

	for (c = 0; s[c] != 0; c++)
		;
	return (c);

}
/**
 * _strlenc - a function that Strlen for constant char pointer s
 * @s: Type char pointer
 * Return: c
 */
int _strlenc(const char *s)
{
	int c;

	for (c = 0; s[c] != 0; c++)
		;
	return (c);
}
