#ifndef MAIN_H
#define MAIN_H


int append_text_to_file(const char *filename, char *text_content);
int create_file(const char *filename, char *text_content);
ssize_t read_textfile(const char *filename, size_t letters);
int _putchar(char c);
int validate_arguments(int argc, char *argv[]);
int open_files(char *source_file, char *destination_file);
int copy_file(int source_fd, int destination_fd);
void close_files(int source_fd, int destination_fd);

#endif /*MAIN_H*/
