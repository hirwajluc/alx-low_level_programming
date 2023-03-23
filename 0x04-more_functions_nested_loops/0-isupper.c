#include "main.h"

/**
 * _isupper - checks uppercase
 * @c: parameter
 * author: Hirwa
 * Return: 0 if sucessful
 */

int _isupper(int c)
{
	if (c >= 65 && c < 91)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
