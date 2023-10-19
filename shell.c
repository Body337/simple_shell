#include "main.h"
/**
 * main - this is the main function of the shell
 * @ac: number of args
 * @av: args
 * Return: nothing
 */
int main(int ac __attribute__((unused)), char *av[])
{
	while (1)
	{
		char *line;
		ssize_t n = 0;
		ssize_t readed = 0;
		char **arguments;

		_putchar('#');
		readed = _getline(&line, &n, 0);
		if (readed == 0)
			continue;
		arguments = make_array(line);

		if (arguments != NULL)
		{
			execute(arguments, av);
		}
	}
}
