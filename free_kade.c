#include "monty.h"

/**
 *  kade_free - Frees a doubly linked list.
 *
 * @head: pointer to the head of the stack.
 */
void kade_free(kennyade *head)
{
	kennyade *tip;

	tip = head;
	while (head)
	{
		tip = head->next;
		free(head);
		head = tip;
	}
}
