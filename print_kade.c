#include "monty.h"

/**
 * kade_print - Prints the values of the stack.
 *
 * @head: A pointer to the head of the stack.
 * @num: Unused parameter.
 */
void kade_print(kennyade **head, unsigned int num)
{
	kennyade *heit;
	(void)num;

	if (head == NULL)
		exit(EXIT_FAILURE);
	heit = *head;
	while (heit != NULL)
	{
		printf("%d\n", heit->n);
		heit = heit->next;
	}
}
