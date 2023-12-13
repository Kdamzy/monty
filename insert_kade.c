#include "monty.h"

/**
 *  kade_insert - insert node at a given integer.
 *
 * @head: Pointer to the head of the stack.
 * @counter: Line number of the stack
 */

void kade_insert(kennyade **head, unsigned int num)
{
	int y, t, nots;

	t = 0, nots = 0;
	if (ken.arg)
	{
		if (ken.arg[0] == '-')
		{
			t++;
		}
		for (; ken.arg[t] != '\0'; t++)
		{
			if (ken.arg[t] > 57 || ken.arg[t] < 48)
				nots = 1; }
		if (nots == 1)
		{ fprintf(stderr, "L%d: usage: push integer\n", num);
			fclose(ken.file);
			free(ken.linetext);
			kade_free(*head);
			exit(EXIT_FAILURE); }}
	else
	{ fprintf(stderr, "L%d: usage: push integer\n", num);
		fclose(ken.file);
		free(ken.linetext);
		kade_free(*head);
		exit(EXIT_FAILURE); }
	y = atoi(ken.arg);
	if (ken.ade == 0)
		kade_nodead(head, y);
	else
	{
		kade_tnode(head, y);
	}
}
