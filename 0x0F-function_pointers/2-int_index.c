#include "function_pointers.h"

/**
* int_infex - check if a number is equal to 98
* @array: the integer to check
*@ size: size
*@cmp
* Return: 0 if false, something else otherwise.
*/

int int_index(int *array, int size, int (*cmp)(int))
{
int c, i = 0;
if (size <= 0)
return (-1);

while (i < size)
{
c = cmp(array[i]);
if (c == 1)
return (i);
i++;
}

return (-1);
}
