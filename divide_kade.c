#include "monty.h"

/**
 * kade_div - Divides the first element by the second.
 *
 * @head: Pointer to the head of the stack.
 * @num: Line number of the stack.
 */
void kade_div(kennyade **head, unsigned int num)
{
	kennyade *heit;
	int legt = 0, solo;

	heit = *head;
	while (heit)
	{
		heit = heit->next;
		legt++;
	}
	if (legt < 2)
	{
		fprintf(stderr, "L%d: can't div, stack too short\n", num);
		fclose(ken.file);
		free(ken.linetext);
		kade_free(*head);
		exit(EXIT_FAILURE);
	}
	heit = *head;
	if (heit->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", num);
		fclose(ken.file);
		free(ken.linetext);
		 kade_free(*head);
		exit(EXIT_FAILURE);
	}
	solo = heit->next->n / heit->n;
	heit->next->n = solo;
	*head = heit->next;
	free(heit);
}
