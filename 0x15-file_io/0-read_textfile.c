#include "main.h"
#include <stdlib.h>
/**
* read_textfile- Read text file print to STDOUT.
* @filename: text file being read
* @letters: number of letters to be read
* Return: w- actual number of bytes read and printed
*        0 when function fails or filename is NULL.
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
char *bug;
ssize_t hc;
ssize_t m;
ssize_t e;
hc = open(filename, O_RDONLY);
if (hc == -1)
return (0);
bug = malloc(sizeof(char) * letters);
e = read(hc, bug, letters);
m = write(STDOUT_FILENO, bug, e);
free(bug);
close(hc);
return (m);
}
