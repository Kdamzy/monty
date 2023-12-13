#include "monty.h"

/**
 * kade_nodead - Adds a new node to the head of the stack.
 *
 * @head: A pointer to the head of the stack.
 * @n: The value of the new node to be added
 */
void kade_nodead(kennyade **head, int n)
{

	kennyade *anew_node, *sol;

	sol = *head;
	anew_node = malloc(sizeof(kennyade));
	if (!anew_node)
	{ printf("Error\n");
		exit(0); }
	if (sol)
		sol->prev = anew_node;
	anew_node->n = n;
	anew_node->next = *head;
	anew_node->prev = NULL;
	*head = anew_node;
}
