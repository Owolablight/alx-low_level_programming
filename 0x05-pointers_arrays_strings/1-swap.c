#include "main.h"

/**
 * swap_int - swap value
 * @a: first variable
 * @b: second variable
 * Return: Always 0.
 */

void swap_int(int *a, int *b)
{
	int n = *a;
	*a = *b;
	*b = n;
}
