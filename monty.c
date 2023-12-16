#include "monty.h"

/**
 * main - handles monty Bytecode files
 * @argc: number of command line arguments
 * @argv: array of command line arguments
 * Return: 0 in success something else otherwise
 */
int main(int argc, char **argv)
{
	stack_t *stack = NULL;
	File *file;
	ssize_t read_line = 1;
	char *content;
	size_t size;
	unsigned int count = 0;

	if (argc != 2)
	{
		fprintf("USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	file = fopen(argv[1], "r");
	data.file = file;
	if (!file)
	{
		fprintf("Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while (read_line > 0)
	{
		content = NULL;
		read_line = getline(&content, &size, file);
		data.content = content;
		count++;
		if (read_line > 0)
		{
			execute(data, count, &stack);
		}
		free(content);
	}
	free_stack(stack);
	fclose(file);
	return (0);

}
