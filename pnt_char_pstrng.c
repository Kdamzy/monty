#include "monty.h"

/**
 * kade_pchar - Prints the character at the top
 * of the stack, followed by a new line.
 *
 * @head: Pointer to the head of the stack.
 * @num: Line number of the stack
 */

void kade_pchar(kennyade **head, unsigned int num)
{
	kennyade *heit;

	heit = *head;
	if (heit == NULL)
	{
		fprintf(stderr, "L%d: can't print char, stack empty\n", num);
		fclose(ken.file);
		free(ken.linetext);
		kade_free(*head);
		exit(EXIT_FAILURE);
	}
	if (heit->n > 127 || heit->n < 0)
	{
		fprintf(stderr, "L%d: can't print char, value out of range\n", num);
		fclose(ken.file);
		free(ken.linetext);
		kade_free(*head);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", heit->n);
}


/**
 * kade_pstr - Prints the string at the top of the stack,
 * followed by a new line.
 *
 * @head: Pointer to the head of the stack.
 * @num: Line number of the stack
 */

void kade_pstr(kennyade **head, unsigned int num)
{
	kennyade *heit;
	(void)num;

	heit = *head;
	while (heit)
	{
		if (heit->n > 127 || heit->n <= 0)
			break;
		printf("%c", heit->n);
		heit = heit->next;
	}
	printf("\n");
}
