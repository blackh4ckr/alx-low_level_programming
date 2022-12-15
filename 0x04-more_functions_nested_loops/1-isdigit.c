#include "main.h"
#include <unistd.h>

/**
 * _isdigit - check description
 * Description: function that checks for a digit (0 through 9).
 * @c:input
 * Return: 1 if c is a digit. else returns 0
 */

int _isdigit(int c)
{
if (c >= 48 && c <= 57)
{
return (1);
}
else
{
return (0);
}
_putchar('\n');
}
