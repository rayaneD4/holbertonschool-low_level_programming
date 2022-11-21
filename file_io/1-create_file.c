#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string
 *
 * Return: 0
 */
int _strlen(char *s)
{
int n = 0;

while (*s != '\0')
{
n++;
s++;

}
return (n);
}

/**
 * create_file - Function that creates a file
 * @filename: name of the file
 * @text_content: content
 * Return: 1
 */

int create_file(const char *filename, char *text_content)
{
	int fd, wd, len = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
		len = _strlen(text_content);

	wd = write(fd, text_content, len);
	close(fd);

	if (wd == -1)
		return (-1);

	return (1);
}
