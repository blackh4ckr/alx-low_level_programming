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
int x, y, z;
x = 0;
y = 0;
z = 0;

for (; dest[z];)
{
z++;
}
while (y < n && src[y])
{
dest[z + x] = src[y];
x++;
y++;


}
return (dest);
}
