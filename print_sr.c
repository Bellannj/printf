#include "main.h"

/**
 * print_s_r - prints a str in reverse
 * @args: arguments
 *
 * Return: the string
 */
int print_s_r(va_list args)
{

	char *s = va_arg(args, char*);
	int i;
	int j = 0;

	if (s == NULL)
		s = "(null)";
	while (s[j] != '\0')
		j++;
	for (i = j - 1; i >= 0; i--)
		_putchar(s[i]);
	return (j);
}

