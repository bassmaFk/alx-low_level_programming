#include "main.h"

/**
* puts_half - prints second half of a string
* if odd number of chars, print (lenght - 1) / 2
* @str: char array string type
*/
void puts_half(char *str)
{
int a;
for (a = 0; str[a] != '\0'; a++)
a++;
for (a /= 2; str[a] != '\0'; a++)
{
_putchar(str[a]);
}
}
