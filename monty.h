#ifndef MONTY_H
#define MONTY_H

#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include <ctype.h>
/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
        int n;
        struct stack_s *prev;
        struct stack_s *next;
} stack_t;
/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
        char *opcode;
        void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;
/**
 * struct argu_s - opcode and value
 * @command: opcode
 * @value: value
 */
typedef struct argu_s
{
	char *command;
	char *value;
} argu_t;
extern argu_t arguments;
argu_t arguments;
void get_opcode(stack_t **head, unsigned int line_number);
void _push(stack_t **head, unsigned int line_number);
void _print_all(stack_t **head, unsigned int line_number);
void free_stuff(char *buffer, stack_t *head);
void print_errors(unsigned int code, char *argv, unsigned int n_line);
int check_digit(char *string);
void _pint(stack_t **head, unsigned int line_number);
void _pop(stack_t **head, unsigned int line_number);
void _swap(stack_t **head, unsigned int line_number);
int list_len(stack_t *head);
void _add(stack_t **head, unsigned int line_number);
void errors1(unsigned int code, unsigned int n_line);
void _sub(stack_t **head, unsigned int line_number);
#endif
