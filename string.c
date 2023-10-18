#include "main.h"
/**
 * _strlen - works the same as strlen
 * @s: is a char to be tested
 *
 * Return: the sum on success
 */
int _strlen(char *s)
{
	int c = 0;

	for (; *s != '\0'; s++)
	{
		c++;
	}
	return (c);
}
/**
 * _atoi - converts string to an integar
 * @s: a pointer to a string
 *
 * Return: the number
 */
int _atoi(char *s)
{
	int sign = 1;
	unsigned int nb = 0;
	signed int nb1 = 0;

	for (; *s != '\0'; s++)
	{
		if (*s == ' ' || *s == '+' || *s == '-')
		{
			if ((*s == '-' && sign == 1) || (*s == '+' && sign == -1))
			{
				sign = -1;
			}
			else if (*s == '-' && sign == -1)
			{
				sign = 1;
			}
		}
		if (*s >= '0' && *s <= '9')
		{
			nb = nb + (*s - '0');
			if (*(s + 1) < '0' || *(s + 1) > '9')
			{
				break;
			}
			else
			{
				nb = nb * 10;
			}
		}
	}
	if (sign == -1)
	{
		nb1 = nb * sign;
		return (nb1);
	}
	return (nb * sign);
}
/**
 * _strcmp - works the same as strcmp
 * @s1: pointer to string 1
 * @s2: pointer to string 2
 *
 * Return: 0 if simmiler
 */
int _strcmp(char *s1, char *s2)
{
	for (; *s1 != '\0';)
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}

		s1++;
		s2++;
	}
	return (0);
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
		{
			return (s + a);
		}
	}
	if (c == '\0')
	{
		return (s + a);
	}
	return ('\0');
}
