#include "main.h"

/**
 * print_rev - check the code
 * Description: function that prints a string, in reverse
 * @s: pointer
 * Return: Always 0.
 */

void print_rev(char *s)
{
while (s = &s[-1]; s != '\0')
{
_putchar(*s++);
}
_putchar('\n');

}
