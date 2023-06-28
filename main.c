#include "main.h"
/**
* main - Entry point.
* @argc: is the number of arguments on the command line.
* @argv: is an array of arguments on the command line.
*
* Return: Always 0.
*/

int main(int argc, char **argv)
{
char *cmdline = NULL;
char **toks = NULL;
const int RUNNING = 1;
(void)argc;
(void)argv;

while (RUNNING)
{
if (isatty(STDIN_FILENO))
/*The isatty returns 1 if the stdin is a terminal and 0 otherwise.*/
_printf("#cisfun$ ");

cmdline = ReadCmdL();
if (cmdline == NULL)
{
	perror("Error reading command line.\n");
	free(cmdline);
	exit(1);
}
toks = ToknizeCmdL(cmdline);
if (toks == NULL)
{
	perror("Error tokenizing command line.\n");
	free(cmdline);
	exit(1);
}
if (toks[0] != NULL)
{
if (!Built_in(toks))
ExecCmdL(toks);
}

free_array(toks);
free(cmdline);
}
free_array(environ);
free_array(toks);
free(cmdline);
return (0);
}
