#include "main.h"

/**
 * _islower - check for lower case
 * @c: is the int that will be used for argument of teh function
 * Return: Always 0 (Success)
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
