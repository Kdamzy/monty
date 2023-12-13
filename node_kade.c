#include "monty.h"

/**
 * kade_tnode - Adds a node to the tail of the stack.
 *
 * @head: Pointer to the head of the stack.
 * @y: New value to be added to the stack.
 */

void kade_tnode(kennyade **head, int y)
{
	kennyade *anew_node, *sot;

	sot = *head;
	anew_node = malloc(sizeof(kennyade));
	if (anew_node == NULL)
		printf("Error\n");
	anew_node->n = y;
	anew_node->next = NULL;
	if (sot)
	{
		while (sot->next)
		{
			sot = sot->next;
		}
	}
	if (sot == NULL)
	{
		*head = anew_node;
		anew_node->prev = NULL;
	}
	else
	{
		sot->next = anew_node;
		anew_node->prev = sot;
	}
}
