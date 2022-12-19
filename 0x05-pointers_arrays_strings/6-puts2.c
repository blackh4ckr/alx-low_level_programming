#include "main.h"

/**
*puts2 - check code
*Description:function that prints every other character of a string
*@str: string pointer
*Return: 0
*/

void puts2(char *str)
{
int i = 0;
for (; str[i] != '\0';)
{
_putchar(i);
i += 2;
}
_putchar('\n');

}
