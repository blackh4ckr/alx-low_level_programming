#include <sys/stat.h>

#include <fcntl.h>

#include <unistd.h>



/**
 * create_file - creates a file and writes text to it
 *
 * @filename: the name of the file to create
 *
 * @text_content: the text to write to the file, or NULL for an empty file
 *
 * Return: 1 on success, -1 on failure
 *
 */

int create_file(const char *filename, char *text_content)
{
	int fd, flag;

	ssize_t n_written;

	if (!filename)
		return (-1);

	flag = O_CREAT | O_TRUNC | O_WRONLY;
	fd = open(filename, flag, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);

	if (!text_content)
	{
		close(fd);
		return (1);
	}
	n_written = write(fd, text_content, _strlen(text_content));
	if (n_written == -1 || n_written != _strlen(text_content))
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}


