#include <stdio.h>
#include "main.h"
/**
*print_array - prints every character of a string
*@a: string parameter input
* @n : number of index to print
*Return : Noting
*/
void print_array(int *a, int n)
{
int i;
for (i = 0; i < n; i++)
{
printf("%d", a[i]);
if (i < n - 1)
{
printf(", ");
}
}
printf("\n");
}
