#include "function_pointers.h"
#include <stddef.h>
#include <stdio.h>
/**
 * print_name - function that prints a name
 *
 * @name: name of the person
 *
 * @f: input pointer function and execute it
 *
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != 0 && f != 0)
		f(name);
}
