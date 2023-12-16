#include "monty.h"

/**
 * main - handles monty Bytecode files
 * @argc: number of command line arguments
 * @argv: array of command line arguments
 * Return: 0 in success something else otherwise
 */
int main(int argc, char **argv)
{
	stack_t stack;
	char *file, *buff = NULL, **arr;
	int file;
	size_t len = 0;
	void (*f)(stack_t, int);

	fcheck(argc, argv);
	stack = malloc(sizeof(stack_t));
	if (!stack)
	{
		perror("Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	stack->prev = NULL;
	stack->next = NULL;
	file = open(argv[1], O_RDONLY);
	if (!file)
	{
		fprintf(stderr, "Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while (getline(&buff, &len, file) != -1)
	{
		arr = parse(buff);
		f = execute(arr[0]);
		f(stack, arr[1]);
	}
	close(file);
	return (0);
}
