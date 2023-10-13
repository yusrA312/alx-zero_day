#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stddef.h>
#include <stdbool.h>
#include <sys/stat.h>

void frokerr(void);
void waiterr(void);
int _strncmp(char *s1, char *s2, size_t n)
char **split_string(char *str, char *separators, size_t *word_count);
int _atoi(char *s);
char *_strcpy(char *dest, char *src);
void handle_exit(char **exit_args, size_t no_of_args);
void _printenv(void);
void handle_env(char **env_args, size_t no_of_args);
void free_vector(char **ver, int len);
void set_zeros(unsigned int *arr, size_t size);
int is_delim(char *delim, char c);
char *_getenv(char *key);
bool check_file_status(char *pathname, struct stat *statbuf);
char *check_file_in_path(char *filename, struct stat *statbuf);
int execute(char **arguments, int no_of_args, char **envp);
void handle_error(pid_t pid);
extern char **environ;
struct stat
{
	dev_t st_dev;
	ino_t st_ino;
	mode_t st_mode;
	nlink_t st_nlink;
	uid_t st_uid;
	gid_t st_gid;
	dev_t st_rdev;
	off_t st_size;
	time_t st_atime;
	time_t st_mtime;
	time_t st_ctime;
	blksize_t st_blksize;
	blkcnt_t st_blocks;
	mode_t st_attr;
}
struct stat *statbuf;
