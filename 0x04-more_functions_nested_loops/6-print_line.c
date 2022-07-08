#include "main.h"
/** print_line - draws a straight line
 * @n - number of characters
 */
void print_line(int n)
{
	int len;

	if (n > 0)
	{
		for(len = 0; len < n; len++)
			putchar('_');
	}
	putchar('\n');
}
