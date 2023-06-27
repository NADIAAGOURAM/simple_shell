#include "main.h"

/**
 * Built_in - handles built_in commands
 * @toks: string
 * Return:bool
 */

bool Built_in(char **toks)
{
	int i = 0;
	builtin builtins[] = {
		{"exit", built_exit},
		{"env", built_env},
		{"setenv", built_setenv},
		{"unsetenv", built_unsetenv},
		{"cd", built_cd},
		{NULL, NULL}
	};

	while (builtins[i].cmd != NULL)
	{
		if (strcmp(toks[0], builtins[i].cmd) == 0)
		{
			builtins[i].funct(toks);
			return (true);
		}
		i++;
	}
	return (false);
}

/**
 * built_cd - implement the builtin command cd
 * @toks: string
 * Return: void
 */

void built_cd(char **toks)
{
	char const *predir;

	if (toks[1] == NULL)
	{
		change_directory(getenv("HOME"));
	}
	else
	{
		if (strcmp(toks[1], "-") == 0)
		{
			/*Change to the previous directory*/
			predir = getenv("OLDPWD");
			if (predir != NULL)
			{
				change_directory(predir);
			}
		}
	}
}

/**
 * change_directory - set the work directory
 * @directory:const char
 * Return:void
 */
void change_directory(const char *directory)
{
	char predir[256];

	getcwd(predir, sizeof(predir));
	if (chdir(directory) == 0)
	{
		/*Update the PWD environment variable*/
		setenv("PWD", getcwd(NULL, 0), 1);
		printf("%s\n", getcwd(NULL, 0));
	}
	else
	{
		perror("cd");
	}
	/* Set the OLDPWD environment variable*/
	setenv("OLDPWD", predir, 1);
}

/**
 * built_exit - Implement the exit built-in, that exits the shell + arguments
 * @toks: string
 * Return:void
 */
void built_exit(char **toks)
{
	int status = 0;

	if (toks[1] == NULL)
	{
		exit(0);
	}
	else
	{
		/*Parse the status argument as an integer*/
		status = atoi(toks[1]);
		exit(status);
	}
}
