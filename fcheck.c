#include "monty.h"

/**
 * fcheck - checks the command line arguments
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: void
 */
void fcheck(int argc, char **argv)
{
	int f;

	if (argc != 2)
	{
		perror("Usage: monty file\n");
		exit(EXIT_FAILURE);
	}

	f = open(argv[1], O_RDONLY);
	if (f == -1)
	{
		fprintf(stderr, "Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	close(f);
}
