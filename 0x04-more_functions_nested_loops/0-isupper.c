#include "main.h"
#include <ctype.h>

/**
 * main - check code
 *
 * Description - function that checks for uppercase character.
 * @c:input
 * Returns 1 if c is uppercase
 * isupper checks for uppercase
 * Returns 0 otherwise
 */

int _isupper(int c)
{
if (isupper(c))
	return (1);
else
	return (0);

}

