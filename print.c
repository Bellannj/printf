#include "main.h"

/**
 * _printf - write output according to a format.
 * @format: identifier to look for.
 * Return: size of string.
 */

int _printf(const char *format, ...)
{
	unsigned int count = 0;
	va_list list;

	if (format == NULL)
	{
	return (-1);
	}
	va_start(list, format);

	while (*format)
	{
		if (*format != '%')
		{
			write(1, format, 1);
			count++;
		}
		else
		{
			format++;
		switch (*format)
		{
			case '\0':
			break;

			case '%':
			write(1, format, 1);
			count++;
			break;

			case 'c':
			{
			char c = va_arg(list, int);
			write(1, &c, 1);
			count++;
			break;
			}
			case 's':
			{
			char *str = va_arg(list, char*);
			unsigned int str_len = strlen(str);
			write(1, str, str_len);
			count += str_len;
			break;
			}
			default:
			write(1, format, 1);
			count++;
			break;
		}
		}
		format++;
	}
	va_end(list);

	return (count);
}
