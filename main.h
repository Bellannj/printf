#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>


typedef struct format
{
	char *id;
	int (*f)();
} convert_match;

int print_po(va_list val);
int print_hex_aux(unsigned long int num);
int print_Hex_aux(unsigned int num);
int print_exl_str(va_list val);
int print_HEX(va_list val);
int print_hex(va_list val);
int print_octa(va_list val);
int print_unsigned(va_list args);
int print_b(va_list val);
int print_s_r(va_list args);
int print_rot13(va_list args);
int print_int(va_list args);
int print_d(va_list args);
int _strlen(char *s);
int *_strcpy(char *dest, char *src);
int _strlenc(const char *s);
int rev_string(char *s);
int _strlenc(const char *s);
int print_37(void);
int print_char(va_list val);
int print_str(va_list val);
int _putchar(char c);
int _printf(const char *format, ...);

#endif
