#include "main.h"

/**
 * _strcpy - check description
 * Description: copies the string
 * @dest:input
 * @src:input
 * Return: 0
 */



char *_strcpy(char *dest, char *src)

{

int z = 0;

while (*(src + z) != '\0')

{

*(dest + z) = *(src + z);

z++;

}

*(dest + z) = '\0';

return (dest);

}
