#include "main.h"

/**
*_strlen - check description
*Description: function that returns the length of a string.
*@s: string
*Return: none
*/

int _strlen(char *s)
{

int i;
int counter = 0;

for (i = 0; s[i] != '\0'; i++)
{
counter++;
}
return (counter);
}
