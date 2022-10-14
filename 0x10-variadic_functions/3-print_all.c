#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

void print_char(va_list c);
void print_int(va_list i);
void print_float(va_list f);
void print_string(va_list s);
void print_all(const char * const format, ...);

/**
 * print_char - Prints a char.
 * @c: A list of arguments pointing to
 *       the character to be printed.
 */
void print_char(va_list c)
{
	printf("%c", va_arg(c, int));
}

/**
 * print_int - Prints an int.
 * @i: A list of arguments pointing to
 *       the integer to be printed.
 */

void print_int(va_list i)
{
	printf("%d", va_arg(i, int));
}

/**
 * print_float - Prints a float.
 * @f: A list of arguments pointing to
 *       the float to be printed.
 */
void print_float(va_list f)
{
	printf("%f", va_arg(f, double));
}

/**
 * print_string - Prints a string.
 * @s: A list of arguments pointing to
 *       the string to be printed.
 */
void print_string(va_list s)
{
	char *str = va_arg(s, char *);

	if (str == NULL)
	{
		str = "(nil)";
	}
	printf("%s", str);
}

/**
 * print_all - Prints anything, followed by a new line.
 * @format: A string of characters representing the argument types.
 * @...: A variable number of arguments to be printed.
 *
 * Description: Any argument not of type char, int, float,
 *              or char * is ignored.
 *              If a string argument is NULL, (nil) is printed instead.
 */
void print_all(const char * const format, ...)
{
	unsigned int i, j;

	print_t p[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string},
		{NULL, NULL}
	};
	va_list valist;
	char *separator = "";

	va_start(valist, format);
	i = 0;
	while (format && format[i])
	{
		j = 0;
		while (p[j].t != NULL)
		{
			if (*(p[j].t) == format[i])
			{
				printf("%s", separator);
				p[j].f(valist);
				separator = ", ";
				break;
			}
			j++;
		}
		i++;
	}
	va_end(valist);
	printf("\n");
}
