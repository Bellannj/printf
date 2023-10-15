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

			putchar(c);
			count++;
		}
		else if (*format == 's')
		{
			char *s = va_arg(args, char*);

			fputs(s, stdout);
			count += strlen(s);
		}
		else if (*format == '%')
		{
			putchar('%');
			count++;
		}
		}
		else
		{
			putchar(*format);
			count++;
		}
		format++;
	}
	va_end(args);
	return (count);
}
