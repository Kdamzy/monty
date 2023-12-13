#include "monty.h"

/**
 * kade_arrange - Sets the stack mode.
 *
 * @head: Pointer to the head of the stack.
 * @num: Line number of the stack
 */
void kade_arrange(kennyade **head, unsigned int num)
{
	(void)head;
	(void)num;
	ken.ade = 0;
}


/**
 * kade_set - Sets the queue mode.
 *
 * @head: Pointer to the head of the stack
 * @num: Line number of the stack
 */

void kade_set(kennyade **head, unsigned int num)
{
	(void)head;
	(void)num;
	ken.ade = 1;
}

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
