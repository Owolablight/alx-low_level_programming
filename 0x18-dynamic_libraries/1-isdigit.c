#include "main.h"

/**
 * _isdigit - check for a digit
 * @c: variable being checked
 * Return: Always 0.
 */

int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))

		return (1);
	else
		return (0);
}