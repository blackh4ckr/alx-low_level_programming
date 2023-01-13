#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
*string_nconcat - function that concatenates two strings
*@s1: input
*@s2: input
*@n: input
*Return: NULL if function fails
*/


char *string_nconcat(char *s1, char *s2, unsigned int n)
{
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}

int s1_len = strlen(s1);

int s2_len = strlen(s2);
if (n >= s2_len)
{
n = s2_len;
}

char *concatenated_string = malloc(s1_len + n + 1);

if (concatenated_string == NULL)
{

return (NULL);
}


strcpy(concatenated_string, s1);
strncat(concatenated_string, s2, n);

return (concatenated_string);

}


