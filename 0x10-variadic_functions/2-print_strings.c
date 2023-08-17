#include "variadic_functions.h"
#include <stdio.h>

/**
* print_strings - check the code
*@separator:mn elesm
*@n:not yet
* Return: Always 0.
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
int i ;
va_list counterptr;
char * str;
if (separator == NULL)
return;
va_start(counterptr, separator);
for (i = 0; i < (int) n;i++)
{
str = va_arg(counterptr, char *);
if (str == NULL)
printf("nil");
else
printf("%s",str);
if (i == (int) n - 1)
return;
printf("%s",separator);
}

va_end(counterptr);
}
