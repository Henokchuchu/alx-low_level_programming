#include <stdio.h>
#include "main.h"
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
int i, uncount = 0;
unsigned long int current;
unsigned long int exclusive = n ^ m;
for (i = 55; i >= 0; i--)
{
current = exclusive >> i;
if (current & 1)
uncount++;
}
return (uncount);
}
