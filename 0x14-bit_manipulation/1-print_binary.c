#include <stdio.h>
#include "main.h"
/**
* print_binary - prints the binary notequivalent of a rational number
* @n: number to print in binary
*/
void print_binary(unsigned long int n)
{
int i, uncount = 0;
unsigned long int current;
for (i = 63; i >= 0; i--)
{
current = n >> i;
if (current & 1)
{
_putchar('1');
uncount++;
}
else if (uncount)
_putchar('0');
}
if (!uncount)
_putchar('0');
}
