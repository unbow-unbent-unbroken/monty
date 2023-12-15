#include "monty.h"

/**
 * push - adds a new node at the beginning of a stack_t list
 * @stack: double pointer to the head of the stack
 * @value: integer value to be stored in the new node
 * @line_number: current line number in the Monty bytecode file
 */

void push(stack_t **stack, int value, unsigned int line_number)
{
	stack_t *new_node = malloc(sizeof(stack_t));

	if (!new_node)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}

	new_node->n = value;
	new_node->prev = NULL;
	new_node->next = *stack;

	if (*stack)
		(*stack)->prev = new_node;

	*stack = new_node;
}
