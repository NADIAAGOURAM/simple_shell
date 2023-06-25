#include "main.h"

/**
 * built_env - prints the current environment
 * @toks: string
 * Return:void
 */

void built_env(char **toks)
{
	char **env = environ;

	(void)toks;
	while (*env != NULL)
	{
		_printf(*env);
		_printf("\n");
		env++;
	}
}

/**
 * built_setenv - Set environment variable
 * @toks: string
 * Return:void
 */
void built_setenv(char **toks)
{
	if (toks[1] && toks[2])
	{
		if (setenv(toks[1], toks[2], 1) != 0)
			perror("setenv: Failed to set environment variable\n");
	}
}

/**
 * built_unsetenv - Unset environment variable
 * @toks:string
 * Return:void
 */
void built_unsetenv(char **toks)
{
	if (toks[1])
	{
		if (unsetenv(toks[1]) != 0)
			perror("unsetenv: Failed to unset environment variable\n");
	}
}

