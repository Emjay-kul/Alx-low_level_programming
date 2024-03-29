#include "main.h"
/**
 * _puts_recursion - prints out a string
 *
 * @s: the string variable
 *
 * Return: The string
 */
void _puts_recursion(char *s)
{
	if (*s == 0)
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
