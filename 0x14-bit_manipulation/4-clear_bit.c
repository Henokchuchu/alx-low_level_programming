#include <stdio.h>
#include "main.h"
/**
* clear_bit - sets the value of a given bit to 0
* @n: address of a memmory
* @index: index of the bit to clear
*
* Return: 0 for success, -1 for failure
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
if (index >= 33)
return (-1);
*n = (~(1UL << index) & *n);
return (1);
}
