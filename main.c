#include "monty.h"

kade_info ken = {NULL, NULL, NULL, 0};

/**
 * main - Entry point for the Monty interpreter.
 *
 * @argc: Number of command-line arguments.
 * @argv: Array of command-line arguments.
 * 
 * Return: 0 on success, or EXIT_FAILURE on failure.
 */

int main(int argc, char *argv[])
{
	ssize_t line_read = 1;
	kennyade *stack = NULL;
	char *text;
	FILE *file;
	size_t legt = 0;
	unsigned int num = 0;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	file = fopen(argv[1], "r");
	ken.file = file;
	if (file == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while (line_read > 0)
	{
		text = NULL;
		line_read = getline(&text, &legt, file);
		ken.linetext = text;
		num++;
		if (line_read > 0)
		{
			kade_call(text, &stack, num, file);
		}
		free(text);
	}
	 kade_free(stack);
	fclose(file);
return (0);
}
