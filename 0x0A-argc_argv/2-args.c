#include <stdio.h>
#include "main.h"

/**
 * main - prints the totality of arguments it receives
 * ptr_toargc: no of arguments
 * ptr_toargv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
