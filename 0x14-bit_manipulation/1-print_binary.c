#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * print_binary - Check description
 * Description: function that prints the binary representation of a number.
 * @n: input
 */
void print_binary(unsigned long int n)
{

	if (n > 1)

		print_binary(n >> 1);

	printf("%lu", n & 1);

}

