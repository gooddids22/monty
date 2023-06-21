#include "monty.h"
/**
 * pop_function - Removes the top element of the stack.
 * @h: Pointer to the head of the stack.
 * @c: Current line number of the bytecode file.
 *
 * Return: void
 */
void pop_function(stack_t **h, unsigned int c)
{
	stack_t *temp;

	if (*h == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", c);
		fclose(data.file_descriptor);
		free(data.buff);
		free_td(*h);
		exit(1);
	}
	temp = *h;
	*h = temp->next;
	free(temp);
}
