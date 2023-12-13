#ifndef MONTY_H
#define MONTY_H

#define _POSIX_C_SOURCE 200809L
#include <stdio.h>

#include <stdlib.h>
#include <sys/types.h>

#include <unistd.h>
#include <fcntl.h>

#include <string.h>
#include <ctype.h>

#include <limits.h>


/**
 * kennyades - A list representation of a stack 
 * @n: integer
 * @prev: pointer to the first element
 * @next: pointer to the next element 
 */

typedef struct kennyades
{
	int n;
	struct kennyades *prev;
	struct kennyades *next;
} kennyade;

/**
 * kade_rrot - flip the stack around to the bottom.
 *
 * @head: Pointer to the head of the stack.
 * @num: Line number of the current operation (unused).
 */
void kade_rrot(kennyade **head, __attribute__((unused)) unsigned int num);

/**
 * struct kade_instruct - for line counting
 * @arg: no of vlue
 * @file: pointer to file created
 * @linetext: content of the line
 * @ade: flag change 
 */
typedef struct kade_instruct
{
	char *arg;
	FILE *file;
	char *linetext;
	int ade;
}  kade_info;
extern kade_info ken;
/**
 * struct kade_command - opcode and its function
 * @opcode: the opcode
 * @f: The function to handle the opcode
 */
typedef struct kade_command
{
	char *opcode;
	void (*f)(kennyade **stack, unsigned int line_number);
} kade_mand;

void kade_flip(kennyade **head, unsigned int num);
void kade_sum(kennyade **head, unsigned int num);
int kade_call(char *text, kennyade **stack, unsigned int num, FILE *file);
void kade_free(kennyade *head);
void kade_nodead(kennyade **head, int n);
void kade_print(kennyade **head, unsigned int num);
void kade_lrot(kennyade **head, __attribute__((unused)) unsigned int num);
void kade_rrot(kennyade **head, __attribute__((unused)) unsigned int num);
int main(int argc, char *argv[]);
void kade_mul(kennyade **head, unsigned int num);
void kade_modul(kennyade **head, unsigned int num);
void kade_pchar(kennyade **head, unsigned int num);
void kade_pstr(kennyade **head, unsigned int num);
void kade_pop(kennyade **head, unsigned int num);
void kade_insert(kennyade **head, unsigned int num);
void kade_sub(kennyade **head, unsigned int num);
void kade_div(kennyade **head, unsigned int num);
void kade_arrange(kennyade **head, unsigned int num);
void kade_set(kennyade **head, unsigned int num);
void kade_tnode(kennyade **head, int y);
void kade_ptop(kennyade **head, unsigned int num);
void kade_recessive(kennyade **head, unsigned int num);

#endif
