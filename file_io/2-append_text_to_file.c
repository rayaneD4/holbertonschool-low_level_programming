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
 * append_text_to_file - unction that appends text at the end of a file
 * @filename: name of the file
 * @text_content: content
 * Return: 1
 */
int append_text_to_file(const char *filename, char *text_content)
{
int fd, wd, len = 0;

	if (filename == NULL)
		len = _strlen(text_content);

	if (text_content == NULL)
		return (1);

	fd = open(filename, O_RDWR | O_APPEND);
	if (fd == -1)
		return (-1);

	wd = write(fd, text_content, len);
	close(fd);

	if (wd == -1)
		return (-1);

	return (1);
}
