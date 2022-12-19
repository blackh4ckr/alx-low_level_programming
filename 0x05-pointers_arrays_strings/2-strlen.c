#include "main.h"

/**
*_strlen - check description
*Description: function that returns the length of a string.
*@s: string
*Return: none
*/

int _strlen(char *s)
{

int counter = 0;

while (*s != 0)
{
*s = *s / 10;
counter++;
}
return (counter);
}
