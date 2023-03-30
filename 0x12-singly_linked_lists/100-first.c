#include <stdio.h>

/**
 * hare_tortoise - Print quote before main
 */
void __attribute__((constructor)) hare_tortoise(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
