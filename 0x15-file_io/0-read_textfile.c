#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text file print to STDOUT.
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: w- actual number of bytes read and printed
 * 0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
int fd, num_read;
char buf[1024];

if (filename == NULL)
return (0);

fd = open(filename, O_RDONLY);
if (fd == -1)
return (0);

num_read = 0;
while (letters > 0)
{
ssize_t n = read(fd, buf, sizeof(buf));
if (n == -1)
return (0);
if (n == 0)
break;
if (write(STDOUT_FILENO, buf, n) != n)
return (0);
num_read += n;
letters -= n;
}

close(fd);
return (num_read);
}
