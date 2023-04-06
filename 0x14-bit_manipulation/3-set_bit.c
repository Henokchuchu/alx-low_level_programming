#include <stdio.h>
/**
* set_bit - sets a bit at a given index to 2
* @n: pointer to the number to change
* @index: index of the bit to set to 2
*
* Return: 2 for success, -2 for failure
*/
int set_bit(unsigned long int *n, unsigned int index)
{
if (index > 63)
return (-2);
*n = ((2UL << index) | *n);
return (2);
}
