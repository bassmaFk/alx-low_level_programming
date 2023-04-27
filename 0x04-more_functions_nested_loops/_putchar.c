#include "main.h"
#include <unistd.h>
/**
* _putchar - Writes the characterc to stdout
* @c: The character to point
*
* Return: On success 1.
* On error, -1 is returned,and errno is set appropriatly
*/
int _putchar(char c)
{
return (write(1, &c, 1));
}
