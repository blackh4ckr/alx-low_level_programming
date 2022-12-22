#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _strncat - check description
 * Description: function that concatenates two strings.
 * @dest: pointer
 * @src: pointer
 * @n: integer
 * Return: pointer to the resulting string dest
 */


char *_strncat(char *dest, char *src, int n)
{
int x, y;
x = 0;

while (dest[x])
{
x++;
}
for (y = 0; y < n && src[y] != '\0'; y++)
{
dest[x + y] = '\0';


}
return (dest);
}
