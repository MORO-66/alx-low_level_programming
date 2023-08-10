#include <stdlib.h>
#include "main.h"
/**
*malloc_checkedb - allocates memory using mall
*@b: number of bytes to allocate
* Return: a pointer to the allocated memory
*/
void *malloc_checked(unsigned int b)
{
void *ptr;
ptr = malloc(b);
if (ptr == NULL)
{
exit(98);
}
return (ptr);
}
