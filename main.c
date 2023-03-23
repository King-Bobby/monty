#include "monty.h"

int main(int argc, char *argv[])
{
	int _open;

	if (argc != 2)
	{
		printf("USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	_open = open(argv[1], O_RDONLY);
	if ( _open == -1)
	{
		printf("Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	
	return (0);
}
