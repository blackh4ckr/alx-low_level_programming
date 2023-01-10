#include <stdlib.h>
#include "main.h"

/**
* create_array - main function
* Description: function that creates an array of chars.
* @size: input
* @c: input
* Return: null if size = 0
*/



char *create_array(unsigned int size, char c)
{
if (size == 0)
{
return (NULL);
}

char *arr = (char *)malloc(sizeof(char) * size);
if (arr == NULL)
{
return (NULL);
}

for (unsigned int i = 0; i < size; i++)
{
arr[i] = c;
}

return (arr);

}


