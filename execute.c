#include "main.h"
/**
 * execute - execute a command
 * @cmd: command to be excuted
 *
 * Return: -1 on fail
 */
int execute(char **cmd)
{
	int child_pid, status;
	
	if (cmd != NULL)
	{
		child_pid = fork();
		if (child_pid == -1)
			return (-1);
		if (child_pid == 0)
		{
			if (execve(cmd[0], cmd, environ) == -1)
				perror(cmd[0]);
			exit(EXIT_FAILURE);
		}
		wait(&status);
	}
	return (0);
}
