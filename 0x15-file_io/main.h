#ifndef MAIN_H
#define MAIN_H
#define BUFFER_SIZE 1024


int append_text_to_file(const char *filename, char *text_content);
int create_file(const char *filename, char *text_content);
ssize_t read_textfile(const char *filename, size_t letters);
int _putchar(char c);
int open_source_file(const char *filename);
int open_destination_file(const char *filename);
void copy_file(int source_fd, int destination_fd);
void close_file(int fd, const char *filename);
#endif /*MAIN_H*/
