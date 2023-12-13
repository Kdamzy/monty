#include "monty.h"

/**
 * kade_flip - Swaps the top two elements of the stack.
 *
 * @head: Pointer to the head of the stack.
 * @num: current working line number.
 */
void kade_flip(kennyade **head, unsigned int num)
{
	int  sol, lent;
	kennyade *tose;

	lent = 0;
	tose = *head;
	while (tose)
	{
		tose = tose->next;
		lent++;
	}
	if (lent < 2)
	{
		fprintf(stderr, "L%d: this can't swap, stack too short\n", num);
		fclose(ken.file);
		free(ken.linetext);
		kade_free(*head);
		exit(EXIT_FAILURE);
	}
	tose = *head;
	sol = tose->n;
	tose->n = tose->next->n;
	tose->next->n = sol;
}