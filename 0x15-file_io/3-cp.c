#include <stdio.h>
#include <stddef.h>
#include "main.h"
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#define BUFFER_SIZE 1024

int open_source_file(const char *filename);
int open_destination_file(const char *filename);
void copy_file(int source_fd, int destination_fd);
void close_file(int fd, const char *filename);

/**
 * main - Copies the content of a file to another file.
 * @argc: The number of arguments.
 * @argv: An array of string arguments.
 *
 * Return: 0 on success.
 */
int main(int argc, char *argv[])
{
int source_fd, destination_fd;

if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
	}
source_fd = open_source_file(argv[1]);
destination_fd = open_destination_file(argv[2]);

copy_file(source_fd, destination_fd);

close_file(source_fd, argv[1]);
close_file(destination_fd, argv[2]);

return (0);
}

/**
 * open_source_file - Opens the source file in read-only mode.
 * @filename: The name of the source file.
 *
 * Return: The file descriptor of the opened source file.
 */
int open_source_file(const char *filename)
{
int fd;

fd = open(filename, O_RDONLY);
if (fd == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
exit(98);
}
return (fd);
}

/**
 * open_destination_file - Opens the destination file in write-only mode.
 * @filename: The name of the destination file.
 *
 * Return: The file descriptor of the opened destination file.
 */
int open_destination_file(const char *filename)
{
int fd;

fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR
| S_IWUSR | S_IRGRP | S_IROTH);
if (fd == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
exit(99);
}
return (fd);
}

/**
 * copy_file - Copies the content from the source file to the destination file.
 * @source_fd: The file descriptor of the source file.
 * @destination_fd: The file descriptor of the destination file.
 */
void copy_file(int source_fd, int destination_fd)
{
ssize_t bytes_read, bytes_written;
char buffer[BUFFER_SIZE];

while ((bytes_read = read(source_fd, buffer, BUFFER_SIZE)) > 0)
{
bytes_written = write(destination_fd, buffer, bytes_read);
if (bytes_written == -1 || bytes_written != bytes_read)
{
dprintf(STDERR_FILENO, "Error: Can't write to file\n");
exit(99);
}
}
if (bytes_read == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file\n");
exit(98);
}
}

/**
 * close_file - Closes the file with the given file descriptor.
 * @fd: The file descriptor to close.
 * @filename: The name of the file.
 */
void close_file(int fd, const char *filename)
{
if (close(fd) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close file %s\n", filename);
exit(100);
}
}
