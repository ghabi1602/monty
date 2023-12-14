#ifndef MONTY_H
#define MONTY_H

#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * stack_s - doubly linked list representation for a queue
 * @n: integer
 * @prev: points to the previous element on the stack
 * @next: points to the next element on the stack
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

void fcheck(int, char **);
void finterpret(char *);

#endif
