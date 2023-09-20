#include "main.h"
/**
 * make_array - creates a 2d array
 * @str: string to be modified
 *
 * Return: modified array
 */
char **make_array(char *str, char **array)
{
	char *token;
	int i = 0, j;

	token = _strtok(str, " ");
	array = malloc(sizeof(char *) * n_elements(str));
	if (array == NULL)
	{
		perror(getenv("_"));
		return(NULL);
	}
	while (token != NULL)
	{
		j = 0;
		array[i] = malloc(sizeof(char) * (_strlen(token)) + 1);
		if (array == NULL)
			return (NULL);
		while (j < _strlen(token))
		{
			array[i][j] = token[j];
			j++;
		}
		array[i][j] = '\0';
		token = _strtok(NULL, " ");
		i++;
	}
	array[i] = NULL;
	free(token);
	return (array);
}
/**
 * _strlen - str len
 * @str: string
 * Return : str len
 */
int _strlen(char *str)
{
	int i = 0;
	while (str[i])
		i++;
	return (i);
}
/**
 * _strtok - the same as strtok
 * @str: str
 * @del: token
 * Return: a string
 */
char *_strtok(char *str, char *del)
{
	static char *pos = NULL;
	char *end, *start = (str != NULL)? str : pos;

	while (*start && _strchr(del, *start))
		start++;

	end = start;

	while (*end && !_strchr(del, *end))
		end++;
	if (*start == '\0')
		return (NULL);
	*end = '\0';
	pos = end + 1;

	return (start);
}
/**
 * _strchr - search for char c in string s
 * @s: pointer to a string
 * @c: a char to be searched for
 *
 * Return: pointer to s or null if c not found
 */
char *_strchr(char *s, char c)
{
	int a;

	for (a = 0; s[a]; a++)
	{
		if (s[a] == c)
			return (s + a);
	}
	if (c == '\0')
		return (s + a);

	return ('\0');
}
/**
 * n_elements - number of space + 1
 * @str: string
 *
 * Return: n of elements
 */
int n_elements(char *str)
{
	int i = 0, n = 0;
	while (str[i])
	{
		if (str[i] == ' ')
			n++;
		i++;
	}
	return (n + 1);
}
