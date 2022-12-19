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
while (str[i])
{
if (i % 2 == 0)
{
_putchar(str[i]);
}
i++;
}
_putchar('\n');
}
