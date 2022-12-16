#include "main.h"

/**
 * _isupper - check is a charater is uppercase
 * @c: carrier ineter variable
 * Return : 1 if true, 0 if false
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 99)
	{
		return (1);
	}
	return (0);
}
