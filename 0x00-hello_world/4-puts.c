#include <unistd.h>
#include <string.h>
int main(void)
{
	char my_string[] = "Programming is like building a multilingual puzzle\n";
	write(STDOUT_FILENO, my_string, strlen(my_string));
	return (0);
}

