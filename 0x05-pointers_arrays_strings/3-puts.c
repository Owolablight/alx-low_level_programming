#include "main.h"
#include <unistd.h>

/**
 * _puts - print a string
 * @str: value considered
 * Return: Always 0.
 */

void _puts(char *str)
{
	int l = 0;

	while (*(str + l) != '\0')
	{
		_putchar(str[l]);
		l++;
	}
	_putchar('\n');
}
