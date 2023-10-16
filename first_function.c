#include "main.h"

/*
 * _printing_char - a function that  prints characters
 * @c : the value to print
 * Return : the value printed
 */
int _printing_char(int c)
{
	return (write (1, &c, 1));
}
