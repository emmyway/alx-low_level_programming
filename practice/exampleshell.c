#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	char *buf = NULL;
	char *token;
	size_t buf_size;
	char **argv;
	int status, i;
	pid_t fork_pid;

	argv = malloc(sizeof(char *) * 1024);
	while (1)
	{
		write(1, "#cisfun$ ", 9);
		getline(&buf, &buf_size, stdin);

		token = strtok(buf, "\t\n");

		i = 0;
		while (token)
		{
			argv[i] = token;

			token = strtok(NULL, "\t\n");
			i++;
		}

		fork_pid = fork();
		if (fork_pid == -1)
		{
			perror("fork error:");
			return (0);
		}

		if (fork_pid == 0)
		{
			if (execve(argv[0], argv, NULL) == -1)
			{
				perror("execve error:");
				exit(1);
			}
		}
		else
			wait(&status);
	}
	free(argv);
	return (0);
}
