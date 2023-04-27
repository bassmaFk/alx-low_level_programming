#include "main.h"
/**
* print numbers - Print  0 - 9
* Return: The numbers since 0 uo to 9
*/
void print_numbers (void)
{
int c;
for (c = '0'; c <= '9'; c++)
{
_putchar(c + '0');
}
_putchar('\n');
}

