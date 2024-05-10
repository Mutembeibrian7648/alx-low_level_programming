#include "main.h"
/**
 * _memset - fill a block of memory with a specific value
 * ptr_tos: starting address of memory to be filled
 * ptr_tob: the desired value
 * ptr_ton: number of bytes to be changed
 *
 * Return: changed array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
int i = 0;

for (; n > 0; i++)
{
s[i] = b;
n--;
}
return (s);
}
