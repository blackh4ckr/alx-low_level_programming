#include "main.h"
#include <stdio.h>

/**
* print_array - check code
* Description: function that prints n elements of an array of integers
* @a: input
* @n: n elements
* Return: 0
*/

void print_array(int *a, int n)
{
int x;

for (x = 0; x < n; x++)

{

if (x != n - 1)

printf("%d, ", a[x]);

else

printf("%d", a[x]);

}

printf("\n");



}
