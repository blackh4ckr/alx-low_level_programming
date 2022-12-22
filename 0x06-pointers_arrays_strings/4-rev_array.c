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
int temp, s, e;
s = 0;
e = n - 1;

while (s < e)
{
temp = a[s];
a[s] = a[e];
a[e] = temp;
s++;
e--;
}
}
