#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"



/**
* int_index - check description
* Description:function that searches for an integer
* @array:array
* @size:size
* @cmp:function to compare values
* Return: 0 or -1 if no element matches or size <= 0
*/
int int_index(int *array, int size, int (*cmp)(int))
{

int i;
if (size <= 0)
{
return (-1);
}
for (i = 0; i < size; i++)
{

if (cmp(array[i]) != 0)
{

return (i);

}

}
return (-1);

}


