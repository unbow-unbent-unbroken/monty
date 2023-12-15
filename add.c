#include "monty.h"

/**
 * f_add - adds the top two elements of the stack.
 * @head: stack head
 * @count: line_number
 * Return: no return
*/

void f_add(stack_t **head, unsigned int count)
{
	stack_t *h;
	int lenght = 0, aux;

	h = *head;
	while (h)
	{
		h = h->next;
		lenght++;
	}
	if (lengh < 2)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", count);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	aux = h->n + h->next->n;
	h->next->n = aux;
	*head = h->next;
	free(h);
}