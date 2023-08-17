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
/**
*print_numbers - prints numbers with separator
*@separator: the string separator
* @n: the number of arguments
@...: the integers to print
Return: void
*/
void print_numbers (const char *separator, const unsigned int n, ...)
{
int i = n;
va_list ap;
if (!n)
{
printf("\n");
return;
}
va_start(ap, n);
while (i--)
printf("%d%s", va_arg(ap, int),
i ? (separator ? separator : ""): "\n");
va_end(ap);
}
