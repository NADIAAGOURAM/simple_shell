#include "main.h"

/**
* ExecCmdL - executes commands
* @toks: string
* Return: int
*/

int ExecCmdL(char **toks)
{
pid_t pid;
int status;

pid = fork();
if (pid == 0)
{
/* Child process*/
execute(toks);
exit(EXIT_SUCCESS);
}
else if (pid < 0)
{
perror("Error forking");
}
else
{
/*Parent process*/
do {
wait(&status);
} while (!WIFEXITED(status) && !WIFSIGNALED(status));
}
return (1);
}

/**
* execute - execute execve command with full path
* @toks: string
* Return:void
*/
void execute(char **toks)
{
char *cmd = NULL, *dir = NULL, *full_path = NULL;
char *path = getenv("PATH");
size_t full_path_len = 0;
int i = 0;

for (; toks[i] != NULL; i++)
{
cmd = toks[i];

if (access(cmd, X_OK) == 0)
{
execve(cmd, toks, environ);
}
dir = strtok(path, ":");

while (dir != NULL)
{
full_path_len = strlen(dir) + strlen(cmd) + 2;
full_path = malloc(full_path_len);

if (full_path == NULL)
{
perror("Memory allocation error");
exit(EXIT_FAILURE);
}

snprintf(full_path, full_path_len, "%s/%s", dir, cmd);

if (access(full_path, X_OK) == 0)
{
execve(full_path, toks, environ);
}
free(full_path);
dir = strtok(NULL, ":");
}
}
fprintf(stderr, "Command not found: %s\n", cmd);
exit(EXIT_FAILURE);
}
