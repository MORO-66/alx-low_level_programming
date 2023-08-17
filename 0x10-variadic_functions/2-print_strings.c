#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - prints strings with separator
 * @separator: the separator between strings
 * @n: number of strings to print
 * @...: variable number of strings
* Return: Always void
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
int i;
va_list args;
char *str;
if (separator == NULL)
return;
va_start(args, n);
for (i = 0; i < (int) n; i++)
{
str = va_arg(args, char *);
if (str == NULL)
printf("nil");
else
printf("%s", str);
if (i == (int) n - 1)
return;
printf("%s", separator);
}

va_end(args);
}
