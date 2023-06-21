#include "monty.h"
/**
 * pint_function - Prints the value at the top of the stack.
 * @h: Pointer to the head of the stack.
 * @c: Current line number of the bytecode file.
 *
 * Return: void
 */
void pint_function(stack_t **h, unsigned int c)
{
	if (*h == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", c);
		fclose(data.file_descriptor);
		free(data.buff);
		free_td(*h);
		exit(1);
	}
	printf("%d\n", (*h)->n);
}
