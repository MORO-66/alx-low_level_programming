#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
* create_array - function
* @size: as you can see
* @c: cahr
*Return: string
*/
char *create_array(unsigned int size, char c)
{
char *arr;
unsigned int i;
if (size == 0)
{
return (NULL);
}

arr = (char *)malloc(size * sizeof(char));
if (arr == NULL)
{
return (NULL);
}


for (i = 0; i < size; i++)
{
arr[i] = c;
}

return (arr);
}

