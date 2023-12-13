#include "monty.h"

/**
 * kade_lrot - Rotates the stack to the top.
 *
 * @head: Pointer to the head of the stack.
 * @num: Line number 
 */
void kade_lrot(kennyade **head,
__attribute__((unused)) unsigned int num)
{
	kennyade *evolve, *heit;

	evolve = *head;
	if (*head == NULL || (*head)->next == NULL)
		return;
	heit = (*head)->next;
	heit->prev = NULL;
	while (evolve->next != NULL)
		evolve = evolve->next;
	evolve->next = *head;
	(*head)->next = NULL;
	(*head)->prev = evolve;
	(*head) = heit;
}


/**
 * kade_rrot - Rotates the stack to the bottom.
 *
 * @head: Pointer to the head of the stack.
 * @num: Line number 
 */

void kade_rrot(kennyade **head, __attribute__((unused))
unsigned int num)
{
	kennyade *direct;

	direct = *head;
	if (!*head || (*head)->next == NULL)
		return;
	while (direct->next)
		direct = direct->next;
	direct->next = *head;
	direct->prev->next = NULL;
	direct->prev = NULL;
	(*head)->prev = direct;
	(*head) = direct;
}
