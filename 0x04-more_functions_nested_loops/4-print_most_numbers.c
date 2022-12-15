#include "main.h"


/**
 * print_most_numbers - check description
 * Description: print 0-9 except 2 and 4
 * Return: Always 0
 */


void print_most_numbers(void)
{

int i;
for (i = 0; i < 10; i++)
{
if (i == 2 && i == 4)
{
break;
}
else
{
_putchar(i);
}
_putchar('\n');
}

}
