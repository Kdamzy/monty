#include "monty.h"

/**
 * kade_sum - Adds the top two elements of the stack together
 *
 * @head: Pointer to the head of the stack.
 * @num: the line number.
 */
void kade_sum(kennyade **head, unsigned int num)
{
	int sole, legt;
	kennyade *heit;

	legt = 0;
	heit = *head;
	while (heit)
	{
		heit = heit->next;
		legt++;
	}
	if (legt < 2)
	{
		fprintf(stderr, "L%d: This can't be add, stack is too short\n", num);
		fclose(ken.file);
		free(ken.linetext);
		kade_free(*head);
		exit(EXIT_FAILURE);
	}
	heit = *head;
	sole = heit->n + heit->next->n;
	heit->next->n = sole;
	*head = heit->next;
	free(heit);
}
