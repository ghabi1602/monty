#include "monty.h"

/**
 * main - handles monty Bytecode files
 * @argc: number of command line arguments
 * @argv: array of command line arguments
 * Return: 0 in success something else otherwise
 */
int main(int argc, char **argv)
{
	fcheck(argc, argv);
	finterpret(argv[1]);
	return (0);
}
