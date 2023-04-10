#include <stdio.h>
#include "main.h"
/**
* create_file - Create a new files.
* @filename:the name of the file.
* @text_content: A pointer to a string to write to the file.
*
* Return: If the function fails - -1.
*         Otherwise - 1.
*/
int create_file(const char *filename, char *text_content)
{
int hc, m, len = 0;
if (filename == NULL)
return (-1);
if (text_content != NULL)
{
for (len = 0; text_content[len];)
len++;
}
hc = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
m = write(hc, text_content, len);
if (hc == -1 || m == -1)
return (-1);
close(hc);
return (1);
}
