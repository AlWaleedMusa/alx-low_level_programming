#include <stdio.h>

void before_main(void) __attribute__ ((constructor));

/**
 * before_main - execute before main.
 * Return: nothing.
*/

void before_main(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
