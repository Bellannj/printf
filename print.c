#include "main.h"

/**
 * _printf - write output according to a format.
 * @format: identifier to look for.
 * Return: size of string.
 */

int _printf(const char *format, ...)
{
	int count = 0;
	va_list args;

	va_start(args, format);

	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
		if (*format == 'c')
		{
			int c = va_arg(args, int);

			write(1, &c, sizeof(char));
			count++;
		}
		else if (*format == 's')
		{
			char *s = va_arg(args, char*);

			size_t len = strlen(s);
			write(1, s, len);
			count += len;
		}
		else if (*format == '%')
		{
			write(1, "%", sizeof(char));
			count++;
		}
		}
		else
		{
			write(1, format, sizeof(char));
			count++;
		}
		format++;
	}
	va_end(args);
	return (count);
}
