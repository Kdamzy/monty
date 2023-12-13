#include "monty.h"

/**
 * kade_call - Executes the opcode.
 *
 * @text: Line content containing the opcode.
 * @stack: pointer to the head of the stack.
 * @num: Line counter of the stack
 * @file: Pointer to the Monty file.
 *
 * Return: 0 if the opcode is a comment or
 * if the line is empty, 1 otherwise.
 */
int kade_call(char *text, kennyade **stack,
unsigned int num, FILE *file)
{
	kade_mand opst[] = {
				{"push", kade_insert}, {"pall", kade_print}, {"pint", kade_ptop},
				{"pop", kade_pop},
				{"swap", kade_flip},
				{"add", kade_sum},
				{"nop", kade_recessive},
				{"sub", kade_sub},
				{"div", kade_div},
				{"mul", kade_mul},
				{"mod", kade_modul},
				{"pchar", kade_pchar},
				{"pstr", kade_pstr},
				{"rotl", kade_lrot},
				{"rotr", kade_rrot},
				{"queue", kade_set},
				{"stack", kade_arrange},
				{NULL, NULL}
				};
	char *day;
	unsigned int aii = 0;

	day = strtok(text, " \n\t");
	if (day && day[0] == '#')
		return (0);
	ken.arg = strtok(NULL, " \n\t");
	while (opst[aii].opcode && day)
	{
		if (strcmp(day, opst[aii].opcode) == 0)
		{	opst[aii].f(stack, num);
			return (0);
		}
		aii++;
	}
	if (day && opst[aii].opcode == NULL)
	{ fprintf(stderr, "L%d: instruction unknown %s\n", num, day);
		fclose(file);
		free(text);
		 kade_free(*stack);
		exit(EXIT_FAILURE); }
	return (1);
}
