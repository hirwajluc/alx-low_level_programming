#include "main.h"
/**
 * _islower - checks if a character is lower case if YES it return 1
 * otherwise returns 0 just like islower() function is ctype.h
 * @c: Is the int value to be compared with the ASCII value
 * author: Hirwa
 * Return: 0 if successful.
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
