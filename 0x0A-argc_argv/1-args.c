#include <stdio.h>
#include "main.h"

/**
 * main - print the no of arguments passed to the program
 * ptr_toargc: number of arguments
 * ptr_toargv: array of arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
(void) argv; /*Ignore argv*/
	printf("%d\n", argc - 1);

	return (0);
}
