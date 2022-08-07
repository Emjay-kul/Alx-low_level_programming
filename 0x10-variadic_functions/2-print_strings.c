#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - variadic fxn that prints strings from args
 * @separator: what separates d args
 * @n: no of args being passed
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str = NULL;
	va_list argument_input;

	va_start(argument_input, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(argument_input, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if ((i != n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");
	va_end(argument_input);
}
