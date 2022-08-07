#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - variadic fuxn that prints an arg
 * @separator: separates d fxns
 * @n: no of args being passed in
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int num;
	va_list int_input;

	va_start(int_input, n);

	for (i = 0; i < n; i++)
	{
		num = va_arg(int_input, int);
		printf("%d", num);

		if ((i != n - 1) && separator != NULL)
			printf("%s", separator);
	}
	va_end(int_input);
	printf("\n");
}

