#include "monty.h"

/**
 * kade_ptop - Prints the value at the top of the stack
 * @head: Pointer to the head of the stack.
 * @counter: Line number of the stack
 */
void kade_ptop(kennyade **head, unsigned int num)
{
	if (!*head)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", num);
		fclose(ken.file);
		free(ken.linetext);
		kade_free(*head);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*head)->n);
}


/**
 * kade_recesive - Does nothing.
 * 
 * @head: Pointer to the head of the stack.
 * @num: Line number of the stack
 */
void kade_recessive(kennyade **head, unsigned int num)
{
	(void) num;
	(void) head;
}
