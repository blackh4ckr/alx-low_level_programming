#include "main.h"

/**
*puts2 - check code
*Description:function that prints every other character of a string
*@str: string pointer
*Return: 0
*/

void puts2(char *str)
{
int i;
for (i = 0; str[i] != '\0'; i += 2;)
{
_putchar(i);
}
_putchar('\n');

}
