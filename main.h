#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdbool.h>
#include <string.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <errno.h>

#define TOK_BUFSIZE 128
#define TOK_DELIM " \t\n"

extern char **environ;

char *ReadCmdL(void);
char **ToknizeCmdL(char *buffer);
int ExecCmdL(char **toks);
void execute(char **toks);

bool Built_in(char **toks);
void built_cd(char **toks);
void built_exit(char **toks);
void built_env(char **toks);
void built_setenv(char **toks);
void built_unsetenv(char **toks);

void change_directory(const char *directory);
void free_array(char **array);
void _printf(const char *str);
void handleComments(char *str);
int _strlen(char *s);
int _strcmp(char *s1, char *s2);
char *_strdup(char *str);

/**
 * struct builtin - struct for the builtins
 * @cmd: the name of the builtin
 * @funct: the associated function to be called for each builtin
 */

typedef struct builtin
{
	char *cmd;
	void (*funct)(char **args);
} builtin;

#endif
