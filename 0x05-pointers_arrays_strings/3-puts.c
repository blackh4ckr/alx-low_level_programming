#include "main.h"
/**
* _puts - check description
* Description: function that prints a string, followed by a new line
*@str: string
*Returns: none
*/

void _puts(char *str)
{

while (*str != '\0')
{
_putchar(*str++);
}
_putchar('\n');

}
