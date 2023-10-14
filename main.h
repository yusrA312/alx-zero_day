#ifndef MAIN_H
#define MAIN_H
#define MAX_WORD_COUNT 1024

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stddef.h>
#include <stdbool.h>
#include <sys/stat.h>
#include <limits.h>
#include <fcntl.h>
#include <errno.h>

int _strlen(char *s);
char *str_concat(char *word1, char *word2, char *word3);
char *_strcat(char *dest, char *src);
bool handle_builtin(char **args, size_t no_of_args);
char **split_string(char *str, char *separators, size_t *word_count);
void frokerr(void);
void waiterr(void);
int _strncmp(char *s1, char *s2, size_t n);
char **split_string(char *str, char *separators, size_t *word_count);
int _atoi(char *s);
char *_strcpy(char *dest, char *src);
void handle_exit(char **exit_args, size_t no_of_args);
void _printenv(void);
void handle_env(char **env_args, size_t no_of_args);
void free_vector(char **ver, size_t len);
void set_zeros(unsigned int *arr, size_t size);
int is_delim(char *delim, char c);
char *_getenv(char *key);
bool check_file_status(char *pathname, struct stat *statbuf);
char *check_file_in_path(char *filename, struct stat *statbuf);
extern char **environ;

#endif
