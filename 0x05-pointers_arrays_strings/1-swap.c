#include "main.h"

/**
 *swap_int - check description
 *Description: function that swaps the values of two integers.
 *@a: integer
 *@b: integer
 *Return: none
 */

void swap_int(int *a, int *b)
{

*a = *a + *b;
*b = *a - *b;
*a = *a - *b;


}
