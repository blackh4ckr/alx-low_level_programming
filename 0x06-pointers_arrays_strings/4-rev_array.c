#include "main.h"

/**
 * reverse_array - cehck description
 * Description: function that reverses the content of an array of integers.
 * @a: The character to br printed
 * @n: another
 * Return: On success 1.
 * on error, -1 is returned, and errno is set apropriately.
 */

void reverse_array(int *a, int n)
{
int tmp, x;

for (x = n - 1; x > n / 2; x--)
{
tmp = a[n - 1 - x];
a[n - 1 - i] = a[i];
a[i] = tmp;

}



}
