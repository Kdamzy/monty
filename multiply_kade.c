#include "monty.h"

/**
 *  kade_mul - Multiplies the first two elements of the stack.
 *
 * @head: Pointer to the head of the stack.
 * @num: Line number of the stack
 */

void kade_mul(kennyade **head, unsigned int num)
{
	int den, size = 0;
	kennyade *heit;

	heit = *head;
	while (heit)
	{
		heit = heit->next;
		size++;
	}
	if (size < 2)
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", num);
		fclose(ken.file);
		free(ken.linetext);
		 kade_free(*head);
		exit(EXIT_FAILURE);
	}
	heit = *head;
	den = heit->next->n * heit->n;
	heit->next->n = den;
	*head = heit->next;
	free(heit);
}