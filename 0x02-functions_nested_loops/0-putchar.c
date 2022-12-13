#include "main.h"
#include <unistd.h>

/**
 * main - check code
 *
 * Description: prints _putchar followed by a new line
 *
 * Return: Always 0
 */

int main(void)
{
char s[9] = "_putchar";

int ch;
for (ch = 0; ch < 9; ch++)
	_putchar(s[ch]);

_putchar('/n');
return (0);

}

