#include "monty.h"

/**
 * kade_sub - Subtracts the first two element of the stack
 *
 * @head: Pointer to the head of the stack.
 * @num: Line number of the stack
 */

void kade_sub(kennyade **head, unsigned int num)
{
	int wet, list;
	kennyade *tet;

	tet = *head;
	for (list = 0; tet != NULL; list++)
	{
		tet = tet->next;
	}
	if (list < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", num);
		fclose(ken.file);
		free(ken.linetext);
		kade_free(*head);
		exit(EXIT_FAILURE);
	}
	tet = *head;
	wet = tet->next->n - tet->n;
	tet->next->n = wet;
	*head = tet->next;
	free(tet);
}
