#include <stdio.h>

void first(void) __attribute__ ((constructor));
/**
* print_before_main - prints a sentence
* before the main function is executed
*/
void print_before_main(void)
{
printf("You're beat! and yet, you must allow,\n");
printf("1 bore my house upon my back!\n");
}

