#include "monty.h"

/**
 *  kade_pop - Removes the top element from the stack.
 *
 * @head: Pointer to the head of the stack.
 * @num: Line number of the current working stack
 */
void kade_pop(kennyade **head, unsigned int num)
{
	kennyade *heit;

	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", num);
		fclose(ken.file);
		free(ken.linetext);
		kade_free(*head);
		exit(EXIT_FAILURE);
	}
	heit = *head;
	*head = heit->next;
	free(heit);
}
