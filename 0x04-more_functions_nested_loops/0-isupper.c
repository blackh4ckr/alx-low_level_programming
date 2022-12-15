#include "main.h"

/**
 * _isupper - check description
 *
 * Description - function that checks for uppercase character.
 * @c:input
 * Returns: 1 if c is uppercase else 0
 */

int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}
_putchar('\n');

}

