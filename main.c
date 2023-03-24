#include "monty.h"

int main(int argc, char *argv[])
{
	int n, fd;
	char array[10000], buff[10000];
	char *token;

	if (argc != 2)
	{
		printf("USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		printf("Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	n = read(fd, buff, 10000);
	printf("n: %d\n", n);
	token = strtok(buff, " \n");
	while (token != NULL)
	{
		strcat(array, token);
		if (strcmp(token, "push") == 0)
			push(1);
		else if (strcmp(token, "pall") == 0)
			display();
		token = strtok(NULL, " \n");
	}
	printf("%s\n", array);
	return (0);
}
