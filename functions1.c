#include "main.h"

/**
* _printf - print a string to stdout
* @str: string
* Return: void
*/
void _printf(const char *str)
{
if (!str)
return;
while (*str)
{
write(STDOUT_FILENO, str, 1);
str++;
}
}

/**
* free_array - frees an array of pointers
* @array: array of pointers
* Return: void
*/
void free_array(char **array)
{
int i = 0;

if (!array)
return;
while (array[i])
{
free(array[i]);
array[i] = NULL;
i++;
}
free(array);
}

/**
 * handleComments - handle comments
 * @str: string
 * Return: void
*/
void handleComments(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] == '#')
		{
			str[i] = '\0';
			break;
		}
		i++;
	}
}
