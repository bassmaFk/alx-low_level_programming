#include <stdio.h>

/**
* _strlen - returns the lenght of a string
* @str: The string to get the lenght of
* Return: The length of @str.
*/
size_t _strlen( const char *s)
{
int lenght = 0;
while (*s != '\0')
lenght++;
return (lenght);
}
