#include"monty.h"

/**
 *  kade_modul - Computes the remainder of the second element
 *
 * @head: Pointer to the head of the stack.
 * @counter: Line number of the stack.
 */
void kade_modul(kennyade **head, unsigned int num)
{
	int size, sol;
	kennyade *mic;

	size = 0;
	mic = *head;
	while (mic)
	{
		mic = mic->next;
		size++;
	}
	if (size < 2)
	{
		fprintf(stderr, "L%d: can't do modulus, stack too short\n", num);
		fclose(ken.file);
		free(ken.linetext);
		 kade_free(*head);
		exit(EXIT_FAILURE);
	}
	mic = *head;
	if (mic->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", num);
		fclose(ken.file);
		free(ken.linetext);
		 kade_free(*head);
		exit(EXIT_FAILURE);
	}
	sol = mic->next->n % mic->n;
	mic->next->n = sol;
	*head = mic->next;
	free(mic);
}
