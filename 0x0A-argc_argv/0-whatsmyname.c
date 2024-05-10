#include <stdio.h>
#include "main.h"

/**
 * main - prints the name of the program
 * ptr_toargc: no of arguments
 * ptr_toargv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
