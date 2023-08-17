#include "variadic_functions.h"
#include <stdio.h>
/**
* main - check the code
*@separator:mn elesm
*@n:not yet
* Return: Always 0.
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
int i;
va_list counterptr;
if (separator == NULL)
return;
va_start(counterptr, n);
for (i = 0; i < (int) n; i++)
{
printf("%d", va_arg(counterptr, int));
if (i == (int) n - 1)
return;
printf("%s", separator);
}
va_end(counterptr);
}
