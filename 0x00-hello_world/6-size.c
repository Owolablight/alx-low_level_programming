#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char acharacter;
	int ainteger;
	long along;
	long long my_very_long;
	float afloat;

	printf("Size of char: %lu byte(s)\n", sizeof(acharacter));
	printf("Size of int: %lu byte(s)\n", sizeof(ainteger));
	printf("Size of long: %lu byte(s)\n", sizeof(along));
	printf("Size of a very very int: %lu byte(s)\n", sizeof(my_very_long));
	printf("Size of a float: %lu byte(s)\n," sizeof(afloat));

	return (0)
}
