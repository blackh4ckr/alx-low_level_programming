#include "main.h"

/**
 * rev_string - check the code
 * Description: function that prints a string, in reverse
 * @s: pointer
 * Return: Always 0.
 */

void rev_string(char *s)
{
int len = 0;
while (s[len] != '\0')
{
len++;
}

len--;
for (; len >= 0; len--)
{
return (s[len]);
}
}
