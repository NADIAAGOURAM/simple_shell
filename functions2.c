#include "main.h"

/**
 * _atoi - convert a string to an integer.
 * @s: char type string
 * Return: integer converted
 */

int _atoi(char *s)
{
unsigned int num = 0;
int sign = 1;

do {
if (*s == '-')
sign *= -1;
else if (*s >= '0' && *s <= '9')
num = (num * 10) + (*s - '0');
else if (num > 0)
break;
} while (*s++);
return (num *sign);
}

/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: length
 */

int _strlen(char *s)
{
int len = 0;

while (*s != '\0')
{
len++;
s++;
}
return (len);
}

/**
 * _strcmp - compares two strings.
 * @s1:string
 * @s2:string
 * Return: int
*/

int _strcmp(char *s1, char *s2)
{
int j;

for (j = 0; s1[j] != '\0' || s2[j] != '\0'; j++)
{
if (s1[j] != s2[j])
{
return (s1[j] - s2[j]);
}
}
return (0);
}

/**
 * _strdup - returns a pointer to a new string that duplicate the string str
 * @str:string to be duplicated
 * Return:pointer to string or NULL
 */

char *_strdup(char *str)
{
char *a;
int i, size = 0;

if (str == NULL)
return (NULL);
while (str[size] != '\0')
size++;
a = malloc(sizeof(char) * size + 1);
if (a == NULL)
return (NULL);
for (i = 0; i < size; i++)
a[i] = str[i];
return (a);
}
